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
};
#endif//__SELECTSORT__H
