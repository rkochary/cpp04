#ifndef CHERACTER_HPP
#define CHERACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        AMateria* arr[4];
        std::string _name;
    public:
        Character();
        Character(const std::string &name);
        Character(const Character &obj);
        Character & operator=(const Character &obj);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif