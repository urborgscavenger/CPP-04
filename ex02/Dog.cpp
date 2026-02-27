#include "Dog.hpp"
#include "CSharpStyle.hpp"

Dog::Dog() : brain(new Brain()) {
    type = "Dog";
    WriteLine("Dog default constructor called");
}

Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain)) {
    WriteLine("Dog copy constructor called");
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    WriteLine("Dog assignment operator called");
    return *this;
}

Dog::~Dog() {
    delete brain;
    WriteLine("Dog destructor called");
}

void Dog::makeSound() const {
    WriteLine("Woof woof!");
}

void Dog::setIdea(int index, const string& idea) {
    brain->setIdea(index, idea);
}

string Dog::getIdea(int index) const {
    return brain->getIdea(index);
}