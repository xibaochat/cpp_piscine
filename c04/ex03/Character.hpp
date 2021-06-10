#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"

class Character: public ICharacter
{
private:
	std::string _name;
	AMateria *_inventory[4];
	int _count;
	Character(void);
public:
	Character(std::string name);
	Character(Character const &);
	~Character();
	Character & operator=( Character const &);

	std::string const & getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);


};

#endif
