#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    Brain *brain;
public:
    Cat();
    virtual ~Cat();
    Cat(Cat const &other);
    Cat &operator =(Cat const &other);
    virtual void makeSound() const;
};

#endif