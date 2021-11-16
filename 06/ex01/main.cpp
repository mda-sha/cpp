#include <iostream>

struct Data
{
    std::string a;
};

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main()
{
    Data b;
    b.a = "puk";

    uintptr_t ad = serialize(&b);
    std::cout << ad << std::endl;
    Data *c = deserialize(ad);
    std::cout << c->a << std::endl;
}
