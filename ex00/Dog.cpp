#include "Dog.hpp"
#include "CSharpStyle.hpp"

Dog::Dog() {
    type = "Dog";
    WriteLine("Dog default constructor called");
}

Dog::Dog(const Dog& other) : Animal(other) {
    WriteLine("Dog copy constructor called");
}

Dog& Dog::operator=(const Dog& other) {
    Animal::operator=(other);
    WriteLine("Dog assignment operator called");
    return *this;
}

Dog::~Dog() {
    WriteLine("Dog destructor called");
}

void Dog::makeSound() const {
    WriteLine("Woof woof!");
}