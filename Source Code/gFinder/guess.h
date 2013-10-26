#ifndef __GUESS_H__
#define	__GUESS_H__
#define MINI_LEN 14
#define DEBUGONE

#include<iostream>
#include<fstream>
#include<vector>
#include<map>
#ifndef DEBUGONE
#include"gfregdb.h"
#endif
#include"gene.h"

//this is for guess the regu o

typedef std::map<std::string,gene> map_gene;
typedef std::vector<std::vector<int> > vss;
typedef std::vector<gene> gene_list;
class guess
{
public:
	map_gene gene_lib;

#ifndef DEBUGONE
	str_ges reg_lib;
#endif
	guess(map_gene mp0):
		gene_lib(mp0)
	{
				
	}
	guess()
	{
	}
	vss comparetwo(gene a,gene b);
	gene_list reguted(gene a);
	gene_list reguting(gene a);
	void readTFTF();
#ifndef DEBUGONE
	str_ges createregs(gene_list,gene,bool);
#endif

	//this is compare two
	void build_lib();
	int* get_reg_ing(std::string);
	int* get_reg_ed(std::string);
};



#endif
