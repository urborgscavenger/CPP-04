#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "CSharpStyle.hpp"

class Animal {
protected:
    string type;

public:
    Animal();
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    virtual ~Animal();

    virtual void makeSound() const = 0;
    string getType() const;
};

#endif