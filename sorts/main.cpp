#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include <ctime>
#include "BubbleSort.h"
#include "InsertSort.h"
#include "SelectSort.h"
#include "QuickSort.h"
#include "Counter.h"

using namespace std;

std::vector<int> getOriginalArray(int number)
{
	srand((unsigned int)time(NULL));
	vector<int> v;
	for(int i = 0; i != number; ++i)
		v.push_back(rand());
	return v;
}

//void test(const vector<int>& value)
//{
//	for(size_t i = 0; i != value.size() - 1; ++i)
//	{
//		if (value[i] < value[i + 1])
//		{
//			cout << "error:" << endl;
//			return ;
//		}
//	}
//}
//
void showResult(const vector<int>& value)
{
	for_each(value.begin(), value.end(), [](int argument)
			{
				cout << argument << "\n";
			});
	cout << "\n";
}

int main(int argc, char** argv)
{
	vector<int> v;
	if (argc != 2)
		v = getOriginalArray(10);
	else
		v = getOriginalArray(atoi(argv[1]));
		
	vector<shared_ptr<Sort>> vsort;
	vsort.push_back(make_shared<BubbleSort>());
	vsort.push_back(make_shared<InsertSort>());
	vsort.push_back(make_shared<SelectSort>());
	vsort.push_back(make_shared<QuickSort>());
	for_each(vsort.begin(), vsort.end(), [&v](shared_ptr<Sort>& sorter)
			{
				Counter counter;
				auto sorted = v;
				sorter->sort(sorted);
				cout << sorter->name() << ":";
				//showResult(sorted);
			});
	cin.get();
	return 0;
}
