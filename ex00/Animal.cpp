#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor for Animal called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    this->type = obj.type;
    std::cout << "Copy Constructor called for Animal" << std::endl;
}

Animal & Animal::operator=(const Animal &obj)
{
    if(this != &obj)
    {
        type = obj.type;
    }
    std::cout << "Copy assignment operator called for Animal" << std::endl;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Destructor called for Animal" << std::endl;
}