#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
        Brain* brain;
    public:
        Dog();
        ~Dog();
        Dog(const Dog &obj);
        Dog & operator=(const Dog &obj);
        void makeSound();
        void setType(std::string t);
        std::string getType();
};


#endif