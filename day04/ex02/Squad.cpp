#include "Squad.hpp"
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

Squad::Squad(void):_count(0), _units_array(NULL){return ;}

Squad::Squad(Squad const & rhs)
{
	*this = rhs;
	return ;
}

ISpaceMarine* Squad::getUnit(int n) const
{
 	if (n < 0 || n >= this->_count)
		return (NULL);
	return (this->_units_array[n]);
}

ISpaceMarine** Squad::get_units_arr()
{
	return (this->_units_array);
}

int Squad::getCount() const{return (this->_count);}

Squad & Squad::operator=( Squad const & rhs)
{
	int i = -1;
	if (this->_count > 0)
	{
		while (++i < this->_count)
		{
			delete this->_units_array[i];
			this->_units_array[i] = NULL;
		}
		delete this->_units_array;
		this->_units_array = NULL;
	}
	this->_count = rhs.getCount();
	if (rhs.getCount())
	{
		this->_units_array = new ISpaceMarine*[this->_count];
		i = -1;
		while (++i < this->_count)
			this->_units_array [i] = rhs._units_array[i];
	}
	return (*this);
}

Squad::~Squad(void)
{
	int i = -1;
	if (this->_units_array)
	{
		while (++i < this->_count)
		{
			delete this->_units_array[i];
			this->_units_array[i] = NULL;
		}
		delete[] this->_units_array;
		this->_units_array = NULL;
	}
	return ;
}

int Squad::push(ISpaceMarine *new_unit)
{
	if (!new_unit)
		return (this->_count);
	if (this->_count == 0)
	{
		this->_units_array = new ISpaceMarine*[1];
		this->_units_array[0] = new_unit;
		this->_count =1;
		return (this->_count);
	}
	for (int i = 0; i < this->_count; i++)
	{
		if (this->_units_array[i] == new_unit)
			return (this->_count);
	}
	ISpaceMarine **tmp = new ISpaceMarine*[this->_count + 1];
	for (int i = 0; i < this->_count; i++)
		tmp[i] = this->_units_array[i];
	tmp[this->_count] = new_unit;
	delete[] this->_units_array;
	this->_units_array = tmp;
	this->_count++;
	return this->_count;
}
