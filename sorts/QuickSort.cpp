#include "QuickSort.h"

using namespace std;

QuickSort::QuickSort()
{
}

QuickSort::~QuickSort()
{
}

int partition(vector<int> &A, int lo, int hi) 
{ 
    int pivot = A[hi]; 
    int i = lo-1;
    for (int j = lo; j < hi; ++j) 
        if (A[j] <= pivot) 
            swap(A[++i], A[j]);
    swap(A[++i], A[hi]);
    return i;
}

void quick_sort(vector<int>& value, int left, int right) 
{
    if (left > right)
        return;
    int j = partition(value, left, right);
    quick_sort(value, left, j - 1);
    quick_sort(value, j + 1, right);
}	

void QuickSort::sort(std::vector<int>& value)
{
	quick_sort(value, 0, value.size() - 1);
}
