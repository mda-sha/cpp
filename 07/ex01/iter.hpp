#ifndef ITER
#define ITER

template <typename T>
void iter(T *arr, int len, void (*f)(T &))
{
    while (len--)
    {
        f(*arr);
        arr++;
    }
}

#endif