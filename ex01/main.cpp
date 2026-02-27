#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include "CSharpStyle.hpp"

int main() {
    WriteLine("=== Testing basic Dog and Cat with Brain ===");
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;

    WriteLine("\n=== Testing array of Animals ===");
    const int arraySize = 10;
    Animal* animals[arraySize];

    for (int k = 0; k < arraySize; ++k) {
        if (k < arraySize / 2) {
            animals[k] = new Dog();
        } else {
            animals[k] = new Cat();
        }
    }

    for (int k = 0; k < arraySize; ++k) {
        delete animals[k];
    }

    WriteLine("\n=== Testing Deep Copy ===");
    Dog dog1;
    dog1.setIdea(0, "Chase the ball");
    Dog dog2 = dog1;  // Copy constructor
    Dog dog3;
    dog3 = dog1;  // Assignment

    // Modify original
    dog1.setIdea(0, "Sleep all day");

    WriteLine("Original dog idea: " + dog1.getIdea(0));
    WriteLine("Copied dog idea: " + dog2.getIdea(0));
    WriteLine("Assigned dog idea: " + dog3.getIdea(0));

    WriteLine("\n=== Additional tests ===");
    // Test Cat deep copy
    Cat cat1;
    cat1.setIdea(0, "Catch mice");
    Cat cat2 = cat1;
    cat1.setIdea(0, "Nap in sun");
    WriteLine("Original cat idea: " + cat1.getIdea(0));
    WriteLine("Copied cat idea: " + cat2.getIdea(0));

    return 0;
}