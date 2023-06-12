#include "Brain.hpp"

Brain::Brain()
{
    for(int i = 0;i < 100;i++)
    {
        this->ideas[i] = "cool idea";
    }
    std::cout << "Default constructor for Brain called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
    *this = obj;
    std::cout << "Copy Constructor called for Brain" << std::endl;
}

Brain & Brain::operator=(const Brain &obj)
{
    if(this != &obj)
    {
        for(int i = 0; i < 100; i++)
        {
            this->ideas[i] = obj.ideas[i];
        }
    }
    std::cout << "Copy assignment operator called for Brain" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Destructor called for Brain" << std::endl;
}
