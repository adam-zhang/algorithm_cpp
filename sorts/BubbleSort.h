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
	virtual std::string name()
	{
		return "Bubble Sort";
	}
};
#endif//__BUBBLESORT__H
