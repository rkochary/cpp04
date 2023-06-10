#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
    public:
        Animal();
        Animal(const Animal &obj);
        Animal & operator=(const Animal &obj);
        virtual ~Animal() = 0;
        virtual void makeSound() = 0; //pure virtual function or abstract function
    protected:
        std::string type;
};


#endif