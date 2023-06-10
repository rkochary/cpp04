#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(const Cat &obj);
        Cat & operator=(const Cat &obj);
        void makeSound();
        void setType(std::string t);
        std::string getType();
};


#endif