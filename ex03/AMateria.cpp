#include "AMateria.hpp"

AMateria::AMateria() : _type("")
{
    std::cout << "Default Constructor called for AMateria" << std::endl;
}

AMateria::AMateria(const std::string& type) : _type(type)
{
    std::cout << "Constructor with parameters called for AMateria" << std::endl;
}

AMateria::AMateria(const AMateria &obj)
{
    this->_type = obj._type;
    std::cout << "Copy Constructor called for AMateria" << std::endl;
}

AMateria & AMateria::operator=(const AMateria &obj)
{
    if(this != &obj)
    {
        this->_type = obj._type;
    }
    std::cout << "Copy Assignment operator called for AMateria" << std::endl;
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "Destructor called for AMateria" << std::endl;
}


std::string const & AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}

