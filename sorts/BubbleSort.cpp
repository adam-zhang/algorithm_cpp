#include "BubbleSort.h"
#include <utility>
#include <iostream>

using namespace std;

BubbleSort::BubbleSort()
{
}

BubbleSort::~BubbleSort()
{
}

void BubbleSort::sort(std::vector<int>& value)
{
	for(int i = 0; i != value.size() - 1; ++i)
		for(int j = i + 1; j != value.size(); ++j)
			if (value[i] > value[j])
				std::swap(value[i], value[j]);
}
