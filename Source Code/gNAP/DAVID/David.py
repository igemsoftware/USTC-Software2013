def davidCall(fps, labels):
    def getDict(fps, labels):
        start = 23
        content = open(fps['Probe Map'], 'r').readlines()
        dict = {}
        for i in range(23, len(content)):
            items = content[i].rstrip().split('","')
            genesym = items[14].split(' /// ')[0]
            if genesym != '---':
                dict[items[0].replace('"','')] = genesym
        return dict

    from suds.client import Client

    print 'Now Calling DAVID...'
    client = Client('http://david.abcc.ncifcrf.gov/webservice/services/DAVIDWebService?wsdl')
    client.service.authenticate('cxw2010@mail.ustc.edu.cn')

    for comp in labels.comp:
        print '\tProcessing group: %s' % comp
        dict_ids = getDict(fps, labels)
        
        inputIDs = ','.join(open(fps['Gene List AffyID'][comp],'r').read().split('\n'))
        client.service.addList(inputIDs,'AFFYMETRIX_3PRIME_IVT_ID',comp,0)

        # list report
        print '\t\tGenerating list report'
        listReport = client.service.getListReport()
        OUT_LIST = open(fps['DAVID Ann'][comp],'w')
        print >>OUT_LIST, '\t'.join(['AffyID','Gene Symbol','Description'])
        for row in listReport:
            rowDict = dict(row)
            desc = str(rowDict['name'])
            affyid = str(rowDict['values'][0])
            genesym = dict_ids[affyid]
            print >>OUT_LIST, '\t'.join([affyid, genesym, desc])

        # cluster report
        print '\t\tGenerating cluster report'
        clusterReport = client.service.getTermClusterReport(3,3,3,0.5,50)
        OUT_CLUSTER = open(fps['DAVID Pathway'][comp],'w')

        num = 1
        for row in clusterReport:
            rowDict = dict(row)
            score = str(rowDict['score'])
            print >>OUT_CLUSTER, 'Annotation Cluster %d\tEnrichment score: %s' % (num, score)
            num += 1
            single = rowDict['simpleChartRecords']
            print >>OUT_CLUSTER, '\t'.join(['Category', 'Term', 'PValue', 'Genes', 'Fold Enrichment', 'Bonferroni', 'Benjamini', 'FDR'])
            for row2 in single:
                rowDict2 = dict(row2)
                categoryName = str(rowDict2['categoryName'])
                term = str(rowDict2['termName'])
                pvalue = str(rowDict2['ease'])
                affyids = str(rowDict2['geneIds']).split(', ')
                genelist = []
                for affyid in affyids:
                    genelist.append(dict_ids[affyid.lower()])
                genes = ', '.join(genelist)
                enrich = str(rowDict2['foldEnrichment'])
                bonferroni = str(rowDict2['bonferroni'])
                benjamini = str(rowDict2['benjamini'])
                fdr = str(rowDict2['afdr'])
                print >>OUT_CLUSTER, '\t'.join([categoryName, term, pvalue, genes, enrich, bonferroni, benjamini, fdr])