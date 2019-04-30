#ifndef __SELECTSORT__H
#define __SELECTSORT__H

#include "sort.h"
#include "help.h"

class SelectSort : public Sort
{
public:
	SelectSort();
	~SelectSort();
public:
	void sort(std::vector<int>&);
	std::string name()
	{ return "Select Sort"; }
};
#endif//__SELECTSORT__H
