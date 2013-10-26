#include"evo.h"

void evo_test()
{
	evo test("data/all_info");
}
void evo::evolution()
{
	for(int i=0;i<10000;i++)
	{
		int a=RWS();
		int b=RWS();
		ga=gene(gene_lib[a]);
		gb=gene(gene_lib[b]);
		mutation(ga);
		mutation(gb);
		cross(ga,gb);
		num++;
		ga.no=num;
		map[num]=ga;
		num++;
		gb.no=num;
		map[num]=gb;
		dead(2);
	}
}
void evo::cross(gene a,gene b)
{
	l=rand()%min(a.len,b.len);
	r=rand()%(min(a.len,b.len)-l)+l;
	int k=0;
	for(int i=l;i<r;i++)
	{
		k=a.sequen[i];
		a.sequen[i]=b.sequen[i];
		b.sequen[i]=a.sequen[i];
	}

}
void evo::mutation(gene a)
{
	for(i=0;i<20;i++)
	{
		i=rand()%a.len;
		a.sequen[i]=rand()%4;
	}
}
gene evo::RWS()
{
		
}
void evo::dead(int num)
{

}
