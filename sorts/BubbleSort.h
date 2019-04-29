#ifndef __BUBBLESORT__H
#define __BUBBLESORT__H

#include "Sort.h"

class BubbleSort : public Sort
{
public:
	BubbleSort();
	~BubbleSort();
public:
	virtual void sort(std::vector<int>& value);
};
#endif//__BUBBLESORT__H
