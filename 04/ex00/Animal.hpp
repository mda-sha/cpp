#ifndef ANIMAL_HPP
#define ANIMAL_HPP
# include <iostream>
// #include <iostream>

class Animal{
protected:
    std::string type;
public:
    Animal();
    ~Animal();
    Animal(Animal const &other);
    Animal &operator =(Animal const &other);
    virtual void makeSound();
    std::string getType();
};


#endif