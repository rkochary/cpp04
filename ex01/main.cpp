#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
// #include "Animal.cpp"

int main()
{
const Animal* j = new Dog();
const Animal* y = new Cat();
delete j;//should not create a leak
delete y;

const Animal *arr[6];
for(int i = 0; i < 6;i++)
{
    if(i % 2 == 0)
    {
        arr[i] = new Dog();
        delete arr[i];
    }
    else
    {
        arr[i] = new Cat();
        delete arr[i];
    }
}

// Dog basic; 
// {
//  Dog tmp = basic; 
// } 
    return 0;
}