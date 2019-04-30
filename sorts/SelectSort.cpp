#include "SelectSort.h"
#include <vector>
#include <iostream>

using namespace std;

SelectSort::SelectSort()
{
}

SelectSort::~SelectSort()
{
}

size_t minimum(const vector<int>& value)
{
	size_t index = 0;
	for(size_t i = 0; i != value.size(); ++i)
		if (value[index] > value[i])
			index = i;
	return index;
}



void SelectSort::sort(std::vector<int>& value)
{
	for(auto i = value.begin(); i != value.end(); ++i)
	{
		auto index = minimum(vector<int>(i, value.end()));
		std::swap(*i, *(i + index));
	}
}
