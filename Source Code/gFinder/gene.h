#ifndef __GENE_H__
#define __GENE_H__
#include<string>
#include<fstream>
#include<iostream>
class gene
{
public:
	int no;
	std::string prom,name,id;
	int *sequen;
	int len;
	
	gene(std::ifstream* inp)
	{
		std::string seqstr;
		*inp>>no>>prom>>seqstr>>name>>id;
		char str[100];  
		sequen=convstrtonum(seqstr);
		len=seqstr.length();
		inp->getline(str,10);
	}
	gene()
	{
	}
	gene(std::string a)
	{
		this->sequen=convstrtonum(a);
		this->len=a.length();
	}
	gene(gene *a)
	{
		this->no=a->no;
		this->prom=a->prom;
		this->sequen=a->sequen;
		this->name=a->name;
		this->id=a->id;
		this->len=a->len;
	}
	int* convstrtonum(std::string a);
};
extern bool operator<(gene a,gene b);
#endif
