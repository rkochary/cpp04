#include "Cure.hpp"

Cure::Cure()
{
    this->_type = "cure";
    std::cout << "Default Constructor called for Cure" << std::endl;
}

Cure::Cure(const Cure &obj) : AMateria(obj)
{
    this->_type = obj._type;
    std::cout << "Copy Constructor called for Cure" << std::endl;
}

Cure & Cure::operator=(const Cure &obj)
{
    if(this != &obj)
    {
        this->_type = obj._type;
    }
    std::cout << "Copy Assignment operator called for Cure" << std::endl;
    return (*this);
}

Cure::~Cure()
{
    std::cout << "Destructor called for Cure" << std::endl;
}

Cure* Cure::clone()const 
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
     std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}