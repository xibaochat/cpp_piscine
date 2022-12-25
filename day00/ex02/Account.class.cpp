#include <iostream>
#include <sstream>

class Sample
{
public:
	int checkAmount( void ) const;
    static int _nbInst;

};


int Sample::_nbInst = 0;

int Sample::checkAmount( void ) const
{
	Sample::_nbInst += 1;
	std::cout << "Function called" << std::endl;

	return(Sample::_nbInst);
}

int main(int ac, char **av)
{
	int		nb;
	int		times;
	Sample	instance;
	std::stringstream ss;

	if (ac != 2)
		return (0);
	ss << av[1];
	ss >> nb;
	std::cout << "random nb:" << nb << std::endl;
	while (nb)
	{
		times = instance.checkAmount();
		nb--;
	}
	std::cout << "calling times is :" << times << std::endl;
}
