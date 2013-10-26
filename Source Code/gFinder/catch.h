#ifndef __CATCH_H__
#define __CATCH_H__
#include<iostream>
#include<fstream>
#include<string>
class Catch
{
public:
	Catch(std::string filename,int _numso,int _num):
		numso(_numso),num(_num)
	{
		std::ifstream inp(filename.c_str());
		graphmatout=new float*[numso];
		graphmatin=new float*[numso];
		for(int i=0;i<num;i++)
		{
			graphmatin[i]=new float[numso];
			graphmatout[i]=new float[numso];
			for(int j=0;j<numso;j++)
				inp>>graphmatin[i][j];
			for(int j=0;j<numso;j++)
				inp>>graphmatout[i][j];
		}
	};
	//Catch(float**,int);
	int getSuitable(float*prein,float*preout);
	float **graphmatin;
	float **graphmatout;
private:
	int num;
	int numso;
};

#endif
