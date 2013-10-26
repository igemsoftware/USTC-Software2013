#ifndef __GFINDER_H__
#define __GFINDER_H__
#include"stdio.h"
int select_ori();
extern "C" 
{
	int Foo_bar()
	{ 
		return select_ori(); 
	}
}
#endif
