#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    setType("WrongCat");
    std::cout << "Default constructor for WrongCat called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
    this->type = obj.type;
    std::cout << "Copy Constructor called for WrongCat" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &obj)
{
    if(this != &obj)
    {
        this->type = obj.type;
    }
    std::cout << "Copy assignment operator called for WrongCat" << std::endl;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor called for WrongCat" << std::endl;
}

void WrongCat::setType(std::string type)
{
    this->type = type;
}

std::string WrongCat::getType()
{
    return this->type;
}

void WrongCat::makeSound()
{
    std::cout << this->getType() << " says mew" << std::endl;
}