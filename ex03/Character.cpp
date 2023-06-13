#include "Character.hpp"

Character::Character() : _name("")
{
    for(int i = 0; i < 4; i++)
    {
        this->arr[i] = NULL;
    }
    std::cout << "Default Constructor called for Character" << std::endl;
}

Character::Character(const std::string &name) : _name(name)
{
    for(int i = 0; i < 4; i++)
    {
        this->arr[i] = NULL;
    }
    std::cout << "Constructor with parameters called for Character" << std::endl;
}

Character::Character(const Character &obj)
{
    this->_name = obj._name;
    for(int i = 0; i < 4; i++)
    {
        if(obj.arr[i] != NULL)
        {
            this->arr[i] = obj.arr[i]->clone();
        }
        else
            this->arr[i] = NULL;
    }
    std::cout << "Copy Constructor called for Character" << std::endl;
}

Character & Character::operator=(const Character &obj)
{
    if(this != &obj)
    {
        this->_name = obj._name;
        for(int i = 0; i < 4;i++)
        {
            if(this->arr[i] != NULL)
            {
                delete this->arr[i];
                this->arr[i] = NULL;
            }
        }
        for(int i = 0; i < 4;i++)
            this->arr[i] = obj.arr[i]->clone();
    }
    std::cout << "Copy assignment called for Character" << std::endl;
    return (*this);
}

Character::~Character()
{
    for(int i = 0; i < 4; i++)
    {
        if(this->arr[i] != NULL)
        {
            delete this->arr[i];
            this->arr[i] = NULL;
        }
    }
    std::cout << "Destructor called for Character" << std::endl;
}

std::string const & Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria* m)
{
    if(m != NULL)
    {
        for(int i = 0; i < 4; i++)
        {
            if(this->arr[i] == NULL)
            {
                this->arr[i] = m;
                std::cout << "equip done!" << std::endl;
                return ;
            }
        }
    }
     std::cout << "can't equip!" << std::endl;
}

void Character::unequip(int idx)
{
    if(idx >= 0 && idx < 4 && this->arr[idx] != NULL)
    {
        this->arr[idx] = NULL;
        std::cout << "unequip done!" << std::endl;
        return ;
    }
    else
    {
        std::cout << "can't unequip!" << std::endl;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if(idx >= 0 && idx < 4 && this->arr[idx] != NULL)
    {
        this->arr[idx]->use(target);
        std::cout << "found and use object in that index" << std::endl;
    }
    else
    {
        std::cout << "nothing found" << std::endl;
    }
}