#include "Cat.hpp"

Cat::Cat()
{
    brain = new Brain();
    setType("Cat");
    std::cout << "Default constructor for Cat called" << std::endl;
}

Cat::Cat(const Cat &obj)
{
    this->type = obj.type;
    this->brain = obj.brain;
    std::cout << "Copy Constructor called for Cat" << std::endl;
}

Cat & Cat::operator=(const Cat &obj)
{
    if(this != &obj)
    {
        delete this->brain;
        this->type = obj.type;
        brain = new Brain(*obj.brain);
    }
    std::cout << "Copy assignment operator called for Cat" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Destructor called for Cat" << std::endl;
}

void Cat::setType(std::string type)
{
    this->type = type;
}

std::string Cat::getType()
{
    return this->type;
}

void Cat::makeSound()
{
    std::cout << this->getType() << " says mew" << std::endl;
}