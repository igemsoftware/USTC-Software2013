#ifndef __EVA_H__
#define __EVA_H__
#include<string>
#include<iostream>
#include<fstream>
#include<map>
#include"gene.h"
//bool operator<(gene a,gene b);
using namespace std;
typedef std::map<string,gene> map_gene;
//name<->gene_info
extern bool operator<(gene a,gene b);
class evo
{
public:
	int num;
	map_gene gene_lib;
	evo(std::string file)
	{
		std::ifstream* ifs=new std::ifstream(file.c_str());
		num=1747;
		for(int i=0;i<num;i++)	
		{
			gene a(ifs);
			gene_lib[a.name]=a;
		}
	}
	void evolution();
priviate:
	mutation(gene a);
	cross(gene a,gene b);
	dead();
	gene RWS();
};
void evo_test();
#endif
