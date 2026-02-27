#include "WrongCat.hpp"
#include "CSharpStyle.hpp"

WrongCat::WrongCat() {
    type = "WrongCat";
    WriteLine("WrongCat default constructor called");
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    WriteLine("WrongCat copy constructor called");
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    WrongAnimal::operator=(other);
    WriteLine("WrongCat assignment operator called");
    return *this;
}

WrongCat::~WrongCat() {
    WriteLine("WrongCat destructor called");
}