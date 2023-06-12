#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
    public:
        Animal();
        Animal(const Animal &obj);
        Animal & operator=(const Animal &obj);
        virtual ~Animal();
        virtual void makeSound();
        std::string getType();
    protected:
        std::string type;
};


#endif