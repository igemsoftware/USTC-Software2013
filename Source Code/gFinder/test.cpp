#include<iostream>
#include<map>
typedef std::map<int,int> map_int;
int main()
{
	std::string a,b;
	a="3122";
	b=a;
	b[3]='9';
	std::cout<<a;
	return 0;
}
