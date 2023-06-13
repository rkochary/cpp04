#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice &obj);
        Ice &operator=(const Ice &obj);
        virtual ~Ice();
        Ice* clone() const;
        void use(ICharacter& target);
};


#endif