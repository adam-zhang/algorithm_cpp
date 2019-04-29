#ifndef __HELP__H
#define __HELP__H
#include <iterator>


template<class T>
T::iterator minimum(T& c)
{
	T::iterator minimum = c.begin();
	for(T::iterator index : c)
	{
		if (*index > *minimum)
			minimum = index;
	}
	return minimum;
}




#endif//__HELP__H
