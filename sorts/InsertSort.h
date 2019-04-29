#ifndef __INSERTSORT__H
#define __INSERTSORT__H
#include "Sort.h"

class InsertSort : public Sort
{
public:
	InsertSort();
	~InsertSort();
public:
	void sort(std::vector<int>&);
	std::string name()
	{ return "Insert Sort"; }
};
#endif//__INSERTSORT__H
