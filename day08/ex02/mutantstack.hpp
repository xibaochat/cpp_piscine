#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iostream>
#include <deque>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::deque<T>::iterator iterator;
	MutantStack();
	MutantStack(MutantStack const &);
	~MutantStack();
	MutantStack & operator=( MutantStack const &);

	iterator begin();
	iterator end();
};

/*typedef is to use alias
  typename to say it is not a static member*/

#endif
