#ifndef __SORT__H
#define __SORT__H

#include <vector>
#include <string>

struct Sort
{
	virtual void sort(std::vector<int>&) = 0;
	virtual std::string name() = 0;
};
#endif//__SORT__H
