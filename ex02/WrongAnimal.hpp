#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &obj);
        WrongAnimal & operator=(const WrongAnimal &obj);
        ~WrongAnimal();
        void makeSound();
    protected:
        std::string type;
};


#endif