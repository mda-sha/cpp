#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    Brain *brain;
public:
    Dog();
    virtual ~Dog();
    Dog(Dog const &other);
    Dog &operator =(Dog const &other);
    virtual void makeSound() const;
    void *getBrainAddress()const;
};

#endif