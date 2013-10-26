#ifndef __REFERMAP_H__
#define __REFERMAP_H__
#include<iostream>
template <class keyType,class valueType> 
class  refer_map
{
public:
	struct entry;
	void put(keyType key,valueType&);
	entry* find(keyType);//查找
	valueType &get(keyType,int);
private:
	void insert(entry&);//插入
	void insert(entry&,entry*&);//插入
	entry* find(keyType,entry*);//查找
	
	entry* root;
};

#endif
