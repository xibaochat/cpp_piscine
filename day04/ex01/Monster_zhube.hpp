#ifndef MONSTER_ZHUBE_H
# define MONSTER_ZHUBE_H

#include "Enemy.hpp"

class Monster_zhube: public Enemy
{
private:
public:
	Monster_zhube();
	~Monster_zhube();
	Monster_zhube( Monster_zhube const & );
	Monster_zhube & operator=( Monster_zhube const & );
};

#endif
