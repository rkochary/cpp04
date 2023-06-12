#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default constructor for WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    this->type = obj.type;
    std::cout << "Copy Constructor called for WrongAnimal" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &obj)
{
    if(this != &obj)
    {
        type = obj.type;
    }
    std::cout << "Copy assignment operator called for WrongAnimal" << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor called for WrongAnimal" << std::endl;
}

void WrongAnimal::makeSound()
{
    std::cout << " Wrong animals sound " << std::endl;
}