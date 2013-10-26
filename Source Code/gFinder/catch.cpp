#include"Catch.h"
int Catch::getSuitable(float* prein,float*preout)
{
	//prein 为i 对unknow ,preout is unknow to i
	float max=0;
	int res;
	for(int k=0;k<num;k++)//k为被查找基因
	{
		float sum=0;
		float tres=0;
		float round=0;
		float all=0;

		for(int i=0;i<numso;i++)
		{
			sum+=prein[i]*graphmatin[k][i]+preout[i]*graphmatout[k][i];
			if(abs(prein[i])>1e-3||abs(graphmatin[k][i]>1e-3))
				all++;
			if(abs(preout[i])>1e-3||abs(graphmatout[k][i]>1e-3))
				all++;
		}
		if(all>1)
			tres=sum/all;
		else
			tres=0;
		if(tres>max)
			max=tres;
		res=k;
	}
	printf("匹配度:%f\n",max);
	return res;
}
