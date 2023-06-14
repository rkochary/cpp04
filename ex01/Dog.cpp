#include "Dog.hpp"

Dog::Dog()
{
    brain = new Brain();
    setType("Dog");
    std::cout << "Default constructor for Dog called" << std::endl;
}

Dog::Dog(const Dog &obj)
{
    this->type = obj.type;
    delete this->brain;
    this->brain = new Brain(*obj.brain);
    std::cout << "Copy Constructor called for Dog" << std::endl;
}

Dog & Dog::operator=(const Dog &obj)
{
    if(this != &obj)
    {
        delete this->brain;
        this->type = obj.type;
        brain = new Brain(*obj.brain);
    }
    std::cout << "Copy assignment operator called for Dog" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Destructor called for Dog" << std::endl;
}

void Dog::setType(std::string type)
{
    this->type = type;
}

std::string Dog::getType()
{
    return this->type;
}

void Dog::makeSound()
{
    std::cout << this->getType() << " says haf" << std::endl;
}