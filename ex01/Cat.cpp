#include "Cat.hpp"
#include "CSharpStyle.hpp"

Cat::Cat() : brain(new Brain()) {
    type = "Cat";
    WriteLine("Cat default constructor called");
}

Cat::Cat(const Cat& other) : Animal(other), brain(new Brain(*other.brain)) {
    WriteLine("Cat copy constructor called");
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    WriteLine("Cat assignment operator called");
    return *this;
}

Cat::~Cat() {
    delete brain;
    WriteLine("Cat destructor called");
}

void Cat::makeSound() const {
    WriteLine("Meow meow!");
}

void Cat::setIdea(int index, const string& idea) {
    brain->setIdea(index, idea);
}

string Cat::getIdea(int index) const {
    return brain->getIdea(index);
}