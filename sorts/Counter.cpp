#include "Counter.h"
#include <iostream>

using namespace std;

Counter::Counter()
	: current_(time(NULL))
{
}

Counter::~Counter()
{
	cout << time(NULL) - current_ << " ms\n";
}


