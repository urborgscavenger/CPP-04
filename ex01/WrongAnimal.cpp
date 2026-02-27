#include "WrongAnimal.hpp"
#include "CSharpStyle.hpp"

WrongAnimal::WrongAnimal() : type("") {
    WriteLine("WrongAnimal default constructor called");
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
    *this = other;
    WriteLine("WrongAnimal copy constructor called");
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other) {
        type = other.type;
    }
    WriteLine("WrongAnimal assignment operator called");
    return *this;
}

WrongAnimal::~WrongAnimal() {
    WriteLine("WrongAnimal destructor called");
}

void WrongAnimal::makeSound() const {
    WriteLine("Wrong animal sound");
}

string WrongAnimal::getType() const {
    return type;
}