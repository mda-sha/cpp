#ifndef WHATEVER
#define WHATEVER

template <typename T>
void swap(T& x, T& y)
{
    T tmp = y;
    y = x;
    x = tmp;
}

template <typename T>
const T& max(T& x, T& y)
{
    return ((x > y) ? x : y);
}

template <typename T>
const T& min(T& x, T& y)
{
    return ((y > x) ? x : y);
}
#endif