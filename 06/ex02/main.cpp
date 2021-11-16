#include <ctime>
#include <iostream>

class Base{
    public:
        virtual ~Base(){};
};

class A : public Base{

};
class B : public Base{

};
class C : public Base{

};

Base * generate(void)
{
    srand((unsigned int)time(NULL));
    int a = rand() % 3;
    if (a == 0)
        return new A;
    if (a == 1)
        return new B;
    else
        return new C;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" <<std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "B" <<std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "C" <<std::endl;
}

void identify(Base& p)
{
    try
    {
        (void)(dynamic_cast<A&>(p));
        std::cout << "A" <<std::endl;
    }
    catch (std::bad_cast &e){}
    try
    {
        (void)(dynamic_cast<B&>(p));
        std::cout << "B" <<std::endl;
    }
    catch (std::bad_cast &e){}
    try
    {
        (void)(dynamic_cast<C&>(p));
        std::cout << "C" <<std::endl;
    }
    catch (std::bad_cast &e){}
}

int main()
{
    Base *rand = generate();
    identify(rand);
    identify(*rand);
}