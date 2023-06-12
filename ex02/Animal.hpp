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
        virtual void makeSound() = 0; //pure virtual function or abstract function
        virtual std::string getType() = 0;
    protected:
        std::string type;
};


#endif