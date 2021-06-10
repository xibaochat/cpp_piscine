#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
private:
	int _count;
	AMateria* _Materia[4];
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const &);
	MateriaSource & operator=( MateriaSource const &);
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif
