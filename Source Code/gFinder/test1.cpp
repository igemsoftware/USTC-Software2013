#include<iostream>
#include<set>
#include<map>

using namespace std;

class abc
{
public:
	float n;
	abc()
	{
	}
	abc(float x):
		n(x)
	{
	}
};
int main()
{
	abc& d(2);	
	cout<<d->n<<endl;
	return 0;
}
