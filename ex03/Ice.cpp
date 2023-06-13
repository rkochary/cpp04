#include "Ice.hpp"

Ice::Ice()
{
    this->_type = "ice";
    std::cout << "Default Constructor called for Ice" << std::endl;
}

Ice::Ice(const Ice &obj) : AMateria(obj)
{
    this->_type = obj._type;
    std::cout << "Copy Constructor called for Ice" << std::endl;
}

Ice & Ice::operator=(const Ice &obj)
{
    if(this != &obj)
    {
        this->_type = obj._type;
    }
    std::cout << "Copy Assignment operator called for Ice" << std::endl;
    return (*this);
}

Ice::~Ice()
{
    std::cout << "Destructor called for Ice" << std::endl;
}

Ice* Ice::clone()const 
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
     std::cout << "* shoots an ice bolt at " << target.getName() << " * " << std::endl;
}