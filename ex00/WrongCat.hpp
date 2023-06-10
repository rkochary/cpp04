#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat &obj);
        WrongCat & operator=(const WrongCat &obj);
        void makeSound();
        void setType(std::string t);
        std::string getType();
};


#endif