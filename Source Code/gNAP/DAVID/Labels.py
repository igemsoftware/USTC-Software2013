class Labels(object):
    def __init__(self,method_input):
        print 'Loading labels...'
        
        self.species = 'Mus musculus'
        self.taxid = '10090'
        self.array = 'Mouse430_2'
        self.probemap = 'Mouse430_2.na33.annot.csv'
        self.groupmap = {'grp1':'Group 1', 'grp2':'Group 2', 'grp3':'Group 3'} #abbreviation: name
        
        self.templatefnm = 'report_badge_0.005.doc'
        self.reportfnm = 'report_mouse2_badge.doc'
        self.xlsfnm = 'report_mouse2_badge.xls'

        if method_input == 'L':
            self.method = 'limma'
        else:
            self.method = 'badge'        
        self.cutoff = 0.005
        self.threshold = 200
        self.overlap = ['overlap1']
        self.dic_overlap = {'overlap1':'grp1_grp2 vs grp1_grp3'}
        self.comp = ['grp1_grp2', 'grp1_grp3', 'grp2_grp3', 'overlap1']   # wild type_test_tissue phenotype
        self.comp2 =  ['grp1_grp2', 'grp1_grp3', 'grp2_grp3']
        
        self.STRtypes = ['neighborhood', 'coexpression', 'cooccurence', 'databases', 'experiments', 'genefusion', 'textmining', 'black']
        self.STRtypes2 = ['neighborhood', 'coexpression', 'cooccurence', 'databases', 'experiments', 'genefusion', 'textmining', 'complete', 'black']
        
