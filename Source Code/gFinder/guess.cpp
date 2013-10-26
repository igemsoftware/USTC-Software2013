#include"guess.h"

vss guess::comparetwo(gene ga,gene gb)
{
	//if a and b have some simlarity of preproty ,put it here and find the common gene sequence
	//by the way ,the moudle will be developing to computing the struct of common sequence
	int *sa,*sb;
	int la=ga.len,lb=gb.len;
	sa=ga.sequen;
	sb=gb.sequen;
	int* fp[la];
	std::cout<<la;
	for(int i=0;i<la;i++)
	{
		fp[i]=new int[lb];
	}
	for(int j=0;j<lb;j++)
	{
		if(sa[0]==sb[j])
			fp[0][j]=1;
	}
	for(int i=0;i<la;i++)
	{
		if(sa[i]==sb[0])
			fp[i][0]=1;
	}
	
	for(int i=1;i<la;i++)
		for(int j=1;j<lb;j++)
		{
			if(sa[i]!=sb[j])
				continue;
			fp[i][j]=fp[i-1][j-1]+1;
			//complete dp algorithm of common continue string
		}
	for(int i=0;i<la;i++)
	{
		for(int j=0;j<lb;j++)
			printf("%d ",fp[i][j]);
		printf("\n");
	}
	vss res;
	for(int i=la-1;i>=0;i--)
		for(int j=lb-1;j>=0;j--)
		{
			int lcm=fp[i][j];
			for(int i1=0;i1<lcm;i1++)
			{
				fp[i-i1][j-i1]=0;
			}
			if(lcm<MINI_LEN)
				continue;
			int coml=(lcm/3)*3;
			int pi=i-(lcm-coml);
			int pj=j-(lcm-coml);
			std::vector<int> ts(coml);
			for(int i1=1;i1<=coml;i1++)
			{
				ts[coml-i1]=sa[pi-i1+1];
			}
			res.push_back(ts);
		}
	return res;
}
void readTFTF()
{
	
}
#ifdef DEBUGONE
int main()
{

}
#endif
