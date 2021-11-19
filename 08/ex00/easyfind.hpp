#ifndef EASYFIND
#define EASYFIND
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int i)
{
    typename T::iterator iter = std::find(container.begin(), container.end(), i);
    if (iter == container.end())
        throw std::exception();
    return iter;
}

#endif