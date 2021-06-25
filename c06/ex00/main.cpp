#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <stdexcept>
#include <cmath>
#include <limits>
#include <string>

void tranfer_to_char(double val)
{
	if ((val >= 0 && val <= 32) || (val >= 127 && val <= 255))
	{
		std::cout << "char: Non displayable" << std::endl;
		return ;
	}
	else if (val > 32 && val < 127)
	{
		char c = static_cast<char>(val);
		std::cout << "char: '" << c << "'" << std::endl;
	}
	else
		std::cout << "char: " << "impossible" << std::endl;
	return ;
}

void transfer_to_int(double val)
{
	if (std::isnan(val) || val < -2147483648 || val > 2147483647)
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	std::cout << "int: " << static_cast<int>(val) << std::endl;
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "[ERROR] Wrong numbers of arguments" << std::endl;
		return (0);
	}
	std::string s = av[1];
	double val;
	if (s.length() == 1 && !isdigit(s[0]))
		val = static_cast<double>(s[0]);
	else
		val = atof(av[1]);
	std::cout << "TEST " << av[1] << " " << val << std::endl;
	tranfer_to_char(val);
	transfer_to_int(val);
	std::cout << "float: " << std::fixed << std::setprecision(1) << strtof(av[1], NULL) << "f" << std::endl;
	std::cout << "double: " << val << std::endl;

	return (0);
}
