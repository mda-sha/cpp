#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal *arr[6];
    int i = -1;
    while (++i < 3)
        arr[i] = new Dog();
    i--;
    while (++i < 6)
        arr[i] = new Cat();
    i = -1;
    while (++i < 6)
        arr[i]->makeSound();
    i = -1;
    while (++i < 6)
        delete arr[i];
    // while (1)
    // {
    //     i++;
    //     i--;
    // }
}

// int main()
// {
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     delete j;//should not create a leak
//     delete i;
//     int a = 0;
//     while (1)
//     {
//         a++;
//         a--;
//     }
// }

// int main()
// {
//     Dog basic;
//     std::cout << basic.getBrainAddress() << std::endl;
//     {
//         Dog tmp = basic;
//         std::cout << tmp.getBrainAddress() << std::endl;
//     }
//     // int a = 0;
//     // while (1)
//     // {
//     //     a++;
//     //     a--;
//     // }
// }