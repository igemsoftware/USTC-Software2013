#include"gfregdb.h"
bool operator<(element a,element b)
{
	if(a->l != b->l)
		return (a->l < b->l );
	return (a->r < b->r );
}

bool operator==(element a,element b)
{
	if(a->l != b->l)
		return (a->l == b->l );
	return (a->r == b->r );
}

std::set<element&> gfregdb::select(bool func(std::string,std::string,float))
{
	std::set<element&> res;
	for (std::set<element&>::iterator it = db_all.begin(); it != db_all.end(); it1++)    
	{
		if(func(it->l,it->r,it->val))
			res.insert(it);
	}		
	return res;
}

std::set<element&> gfregdb::selectl(std::string l)
{
	return db_l[l];
}

std::set<element&> gfregdb::selectr(std::string r)
{
	return db_r[r];
}
float gfregdb:: selectlr(std::string l,std::string r)
{
	std::set<element&> sl,sr;
	sl=db_l[l];
	sr=db_r[r];
	std::vector<element&> v(10);
	std::vector<element&>::iterator it=std::set_intersection (sl.begin(), sl.end(), sr.begin(), sr.end(), v.begin());
	v.resize(it-v.begin());
	if(v.size()==0)
		return NULL;
	return v[0];
}

void main()
{
	element a=new element("accr","acbr",3);	
	element b=new element("accr","acbr",3);	
	std::set<element&> st0;
	st0.insert(a);
	cout<<st0.count(b);
	return;
}
