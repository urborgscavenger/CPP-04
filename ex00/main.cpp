#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "CSharpStyle.hpp"

int main() {
    WriteLine("Testing Animal, Dog, Cat");
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    WriteLine(j->getType() + " ");
    WriteLine(i->getType() + " ");
    i->makeSound(); // dog
    j->makeSound(); // cat
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    WriteLine("\n=== Testing WrongAnimal, WrongCat ===");
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongI = new WrongCat();
    WriteLine(wrongI->getType() + " ");
    wrongI->makeSound(); // should output WrongAnimal sound
    wrongMeta->makeSound();

    delete wrongMeta;
    delete wrongI;

    WriteLine("\n=== Additional tests ===");
    // Test copy constructors and assignment
    Dog dog1;
    Dog dog2 = dog1;
    Dog dog3;
    dog3 = dog1;

    Cat cat1;
    Cat cat2 = cat1;
    Cat cat3;
    cat3 = cat1;

    WrongCat wrongCat1;
    WrongCat wrongCat2 = wrongCat1;
    WrongCat wrongCat3;
    wrongCat3 = wrongCat1;

    // Test polymorphism with references
    Animal& refDog = dog1;
    Animal& refCat = cat1;
    WriteLine("Dog via reference: ");
    refDog.makeSound();
    WriteLine("Cat via reference: ");
    refCat.makeSound();

    // Test WrongCat via reference
    WrongAnimal& refWrongCat = wrongCat1;
    WriteLine("WrongCat via reference: ");
    refWrongCat.makeSound();

    return 0;
}