#include "Brain.hpp"

Brain::Brain() {
    WriteLine("Brain default constructor called");
    for (int i = 0; i < 100; ++i) {
        ideas[i] = "";
    }
}

Brain::Brain(const Brain& other) {
    WriteLine("Brain copy constructor called");
    for (int i = 0; i < 100; ++i) {
        ideas[i] = other.ideas[i];
    }
}

Brain& Brain::operator=(const Brain& other) {
    WriteLine("Brain assignment operator called");
    if (this != &other) {
        for (int i = 0; i < 100; ++i) {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    WriteLine("Brain destructor called");
}

void Brain::setIdea(int index, const string& idea) {
    if (index >= 0 && index < 100) {
        ideas[index] = idea;
    }
}

string Brain::getIdea(int index) const {
    if (index >= 0 && index < 100) {
        return ideas[index];
    }
    return "";
}