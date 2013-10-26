#include"gene.h"
bool operator<(gene a,gene b)
{
	return a.name<b.name;
}


int*gene::convstrtonum(std::string a)//A C G T : 0 1 2 3
{
	int n=a.length();
	int *res=new int[n];
	for(int i=0;i<n;i++)
	{
		switch(a[i])
		{
			case 'A':
				res[i]=0;
				break;
			case 'C':
				res[i]=1;
				break;
			case 'G':
				res[i]=2;
				break;
			case 'T':
				res[i]=3;
				break;
			default:
				std::cout<<"Hey Guy,U kindding me?"<<std::endl;
		}
	}
	return res;
}
