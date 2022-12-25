#include "Character.hpp"

Character::Character(){return ;}

Character::Character(std::string name):_name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_count = 0;
	return ;
}

Character::Character(Character const &rhs)
{
	*this = rhs;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	return ;
}

Character &Character::operator=( Character const &rhs)
{
	if (this == &rhs)
		return (*this);
	if (this->_count > 0)
		for (int i = 0; i < this->_count; i++)
			delete this->_inventory[i];
	this->_name = rhs.getName();
	this->_count = rhs._count;
	if (rhs._count > 0)
		for (int i = 0; i < rhs._count; i++)
			this->_inventory[i] = rhs._inventory[i]->clone();
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)//m is cloned
{
	if (this->_count > 4 || !m)
		return ;
	this->_inventory[this->_count++] = m;
	return ;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= this->_count || !this->_inventory[idx])
		return ;
	this->_count--;
	if (idx == 3)
	{
		this->_inventory[idx] = NULL;
		return ;
	}
	for (int i = idx; i <= this->_count; i++)
	{
		this->_inventory[i] = this->_inventory[i + 1];
		this->_inventory[i] = NULL;
	}
}

void Character::use(int i, ICharacter& target)
{
	if (i < 0 || i >= this->_count || !this->_inventory[i])
		return ;
	this->_inventory[i]->use(target);
	return ;
}
