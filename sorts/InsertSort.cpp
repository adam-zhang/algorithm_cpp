#include "InsertSort.h"
#include <utility>

InsertSort::InsertSort()
{
}

InsertSort::~InsertSort()
{
}

void InsertSort::sort(std::vector<int>& value)
{
	for(size_t i = 1; i != value.size(); ++i)
		for(size_t j = 0; j != i; ++j)
			if ( value[i] < value[j] )
				std::swap(value[i], value[j]);
}
