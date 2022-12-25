#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->_count = 0;
	for (int i = 0; i < 4; i++)
		this->_Materia[i] = NULL;
	return ;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->_count; i++)
		delete this->_Materia[i];
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &rhs)
{
	*this = rhs;
}

MateriaSource & MateriaSource::operator=( MateriaSource const &rhs )
{
	if (this->_count)
		for (int i = 0; i < this->_count; i++)
			delete this->_Materia[i];
	this->_count = rhs._count;
	for (int i = 0; i < rhs._count; i++)
		this->_Materia[i] = rhs._Materia[i]->clone();
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->_count > 3 || !m)
		return ;
	this->_Materia[this->_count] = m;
	this->_count++;
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->_count; i++)
	{
		if (this->_Materia[i]->getType() == type)
			return (this->_Materia[i]->clone());
	}
	return 0;

}
