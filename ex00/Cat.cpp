#include "Cat.hpp"
#include "CSharpStyle.hpp"

Cat::Cat() {
    type = "Cat";
    WriteLine("Cat default constructor called");
}

Cat::Cat(const Cat& other) : Animal(other) {
    WriteLine("Cat copy constructor called");
}

Cat& Cat::operator=(const Cat& other) {
    Animal::operator=(other);
    WriteLine("Cat assignment operator called");
    return *this;
}

Cat::~Cat() {
    WriteLine("Cat destructor called");
}

void Cat::makeSound() const {
    WriteLine("Meow meow!");
}