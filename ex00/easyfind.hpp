#ifndef EASYFINE_HPP
#define EASYFINE_HPP
#include <algorithm>

template<class T>
typename T::iterator easyfind(T &tab, int i)
{
	return (std::find(tab.begin(), tab.end(), i));
}

#endif