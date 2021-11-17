#ifndef ARRAY
#define ARRAY


template <typename T>
class Array{
    T *arr;
    unsigned int a;
public:
    Array() : arr(nullptr), a(0) {}
    Array(unsigned int a)
    {
        this->a = a;
        if (a == 0)
            arr = nullptr;
        else
            arr = new T[a];
    }
    Array(const Array &other)
    {
        this->a = other.a;
        arr = new T[a];
        int i = 0;
        while (i < a)
            arr[i] = other[i];
    }
    ~Array()
    {
        if (arr)
            delete [] arr;
    }
    T & operator[](const unsigned int i)
    {
        if (i >= a)
            throw std::exception();
        return arr[i];
    }
    Array& operator=(const Array& other)
    {
        if (this == &other)
            return *this;
        if (arr)
            delete [] arr;
        this->a = other.a;
        arr = new T[a];
        int i = 0;
        while (i < a)
            arr[i] = other[i];
        return *this;
    }

    int size()
    {
        return a;
    }
};


#endif