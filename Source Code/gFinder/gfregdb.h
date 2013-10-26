#ifndef __GFREGDB_H__
#define __GFREGDB_H__
#include<map>
#include<set>
#include<vector>
#include <algorithm>
#include<string>

//关系型数据库的最小实现
//要求功能：
//       完整的对于表格列l,r,value的完整查询功能
//       包括对于连续值的大于完成小于功能
//       对于通配符查询不做要求
//       为了强迫症，保证查询效率不低于LogN
//       尼玛就不用英语注释了。
//       另外，c++我去年买了个表的封装。

class element
{
public:
	std::string l,r;
	float val;
	element(std::string _l,std::string _r,float _val):
		l(_l),r(_r),val(_val)
	{
	}
};

bool operator<(element a,element b);
bool operator==(element a,element b);

class gfregdb
{
public:
	//数据库的索引
	std::map <double,std::set<element&> > db_val;
	std::map <std::string,std::set<element&> > db_l;
	std::map <std::string,std::set<element&> > db_r;
	std::set <element&> db_all;
	//查询操作：根据要求查出索引的set，并且进行交操作.
	void insert(element);//使用元素进行插入
	void insert(std::string l,std::string,float v);//使用l,r,v构造并且插入
	std::set<element&> select(bool func(std::string,std::string,float v));
	//传递函数func,查找满足func为true的元素。由于这个部分无法进行优化，所以效率为遍历整个数据库耗时
	std::set<element&> selectl(std::string);//对左值给定的调控关系进行查找
	std::set<element&> selectr(std::string);//对右值给定的调控关系进行查找
	float selectlr(std::string,std::string);//直接返回左右值给定的调控关系的数值
	std::set<element&> select_set(std::set<element&> ,bool func(std::string,std::string,float v));
	//在给入集合中查找符合func的元素并且返回一个集合。
	gfregdb(std::string file)
	{

	}


};

#endif
