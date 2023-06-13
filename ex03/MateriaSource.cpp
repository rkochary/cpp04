#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4;i++)
        this->arr[i] = NULL;
    std::cout << "Default Constructor called for MateriaSource" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
        for(int i = 0; i < 4;i++)
            this->arr[i] = obj.arr[i]->clone();
        std::cout << "Copy Constructor called for MateriaSource" << std::endl;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &obj)
{
    if(this != &obj)
    {
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
    std::cout << "Copy assignment called for MateriaSource" << std::endl;
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if(this->arr[i] != NULL)
        {
            delete this->arr[i];
            this->arr[i] = NULL;
        }
    }
    std::cout << "Destructor called for MateriaSource" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
    if(m == NULL)
        return ;
    for(int i = 0; i < 4; i++)
    {
        if(this->arr[i] == NULL)
        {
            this->arr[i] = m;
            std::cout << "learnMateria called for MateriaSource" << std::endl;
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
        if(this->arr[i] && type.compare(this->arr[i]->getType()) == 0)
            return this->arr[i]->clone();
    }
    return NULL;
}