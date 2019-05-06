#ifndef __QUICKSORT__H
#define __QUICKSORT__H

#include "Sort.h"

class QuickSort : public Sort
{
public:
	QuickSort();
	~QuickSort();
public:
	std::string name()
	{ return "Quick Sort" ;}
	void sort(std::vector<int>&);
};
#endif//__QUICKSORT__H
