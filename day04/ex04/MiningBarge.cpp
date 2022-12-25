#include "MiningBarge.hpp"

MiningBarge::MiningBarge():_count(0)
{
	for (int i = 0; i < 4; i++)
		this->_arr[1] = NULL;
}

MiningBarge::~MiningBarge(){}

MiningBarge::MiningBarge(const MiningBarge& src)
{
	*this = src;
}

MiningBarge & MiningBarge::operator=(const MiningBarge & src)
{
	for (int i = 0; i < 4; i++)
		this->_arr[i] = src._arr[i];
	this->_count = src._count;
	return (*this);
}

void MiningBarge::equip(IMiningLaser*src)
{
	this->_arr[this->_count] = src;
	this->_count++;
}

void MiningBarge::mine(IAsteroid* src) const
{
	for(int i = 0; i < this->_count; i++)
		this->_arr[i]->mine(src);
}
