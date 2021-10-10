#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal{
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();
    Animal(Animal const &other);
    Animal &operator =(Animal const &other);
    virtual void makeSound()const;
    std::string getType()const;
};

#endif
