#include"refer_map.h"
template <class keyType,class valueType> 
struct refer_map<keyType,valueType>::entry
{
public:
	keyType key;
	valueType& val;
	entry* l,*r;
	entry(keyType _key,valueType _val):
		key(_key),val(_val)
	{
	}
	entry(keyType _key)
	{
		key=_key;
		val a();
		val=a;
	}
};
template <class keyType,class valueType> 
void refer_map<keyType,valueType>::insert(entry &e)
{
	if(root==NULL)
		{
			root=&e;
			return;
		}
	if(e.key>root->key)
		insert(e,root->r);
	else
		insert(e,root->l);

}

template <class keyType,class valueType> 
void refer_map<keyType,valueType>::insert(entry &e,entry*& ro)
{
	if(ro==NULL)
		{
			ro=&e;
			return;
		}
	if(e.key>ro->key)
		insert(e,ro->r);
	else
		insert(e,ro->l);

}

template <class keyType,class valueType> 
struct refer_map<keyType,valueType>::entry* refer_map<keyType,valueType>::find(keyType key)
{
	if(root==NULL)
	{
		root=new entry(key);
		return root;
	}
	if(key==root->key)
		return root;
	if(key>root->key)
		return find(key,root->r);
	if(key<root->key)
		return find(key,root->l);
}

template <class keyType,class valueType> 
struct refer_map<keyType,valueType>::entry* refer_map<keyType,valueType>::find(keyType key,entry* root)
{
	if(root==NULL)
		return root;
	if(key==root->key)
		return root;
	if(key>root->key)
		return find(key,root->r);
	if(key<root->key)
		return find(key,root->l);
}

template <class keyType,class valueType> 
valueType& refer_map<keyType,valueType>::get(keyType key,int fp)
{
	if(find(key==NULL))
}
int main()
{
	refer_map<int,abc> rm;
	abc a(3);
	rm[3]=a;
}
