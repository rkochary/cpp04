#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure &obj);
        Cure & Cure::operator=(const Cure &obj);
        virtual ~Cure();
        Cure* clone() const;
        void use(ICharacter& target);
};


#endif