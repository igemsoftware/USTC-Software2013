#include"stdio.h"
#include"stdlib.h"
#include"gFinder.h"
#include"Catch.h"
#include"evo.h"
#define MAXNUM 1800 

int select_ori()
{
	printf("GetInCpp\n");
	Catch cat0("GRN.txt",MAXNUM,2000);
	printf("Done File Imported\n");
	float tesprein[MAXNUM]={0};
	float tespreout[MAXNUM]={0};

	for(int j=0;j<MAXNUM;j++)
		if(rand()%100<90)
			tesprein[j]=0;
		else
			if(rand()%100>50)
				tesprein[j]=1;
			else
				tesprein[j]=-1;
	for(int j=0;j<MAXNUM;j++)
		if(rand()%100<90)
			tespreout[j]=0;
		else
			if(rand()%100>50)
				tespreout[j]=1;
			else
				tespreout[j]=-1;

	int res=cat0.getSuitable(tesprein,tespreout);
	FILE * fp=fopen("res.txt","w");
	for(int i=0;i<MAXNUM;i++)
		fprintf(fp,"%f ",tespreout[i]);
	fprintf(fp,"\n");
	for(int i=0;i<MAXNUM;i++)
		fprintf(fp,"%f ",cat0.graphmatout[res][i]);
	fclose(fp);
	printf("All Done\n");
	return res;
}
int main()
{
	evo_test();
	return 0;
}
