#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
const Animal* j = new Dog();
const Animal* y = new Cat();
delete j;//should not create a leak
delete y;

//const Animal* a = new Animal();
    return 0;
}