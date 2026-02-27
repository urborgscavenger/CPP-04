#include "Animal.hpp"
#include "CSharpStyle.hpp"

Animal::Animal() : type("") {
    WriteLine("Animal default constructor called");
}

Animal::Animal(const Animal& other) {
    *this = other;
    WriteLine("Animal copy constructor called");
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        type = other.type;
    }
    WriteLine("Animal assignment operator called");
    return *this;
}

Animal::~Animal() {
    WriteLine("Animal destructor called");
}

string Animal::getType() const {
    return type;
}