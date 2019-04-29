#ifndef __COUNTER__H
#define __COUNTER__H

#include <ctime>

class Counter
{
public:
	Counter();
	~Counter();
private:
	time_t current_;
};
#endif//__COUNTER__H
