#include <iostream>
#include <string>
#include <cerrno>
#include <fstream>
#include <errno.h>
#include <cstring>
#include <fcntl.h>

int ft_cat(int ac, char **av)
{
	int i = 1;
	int return_value = 0;

	while (i < ac)
	{
		std::string line;
		std::ifstream myfile (av[i]);
		int dir_descriptor = open(av[i], O_DIRECTORY);
		if (dir_descriptor > 0)
		{
			std::cerr << "cat: " << av[i] << ": Is a directory " << std::endl;

			return_value = 1;
		}
		if(myfile.fail())
		{
			std::cout << "cat: " << av[i] << ": Permission denied" << std::endl;
			return_value = 1;
		}
		else if (myfile.is_open())
		{
			while (getline(myfile, line))
				std::cout << line << std::endl;
			myfile.close();
		}
		else
		{
			std::cerr << "cat: " << av[i] << ": Error: " << strerror(errno) << std::endl;
			return_value = 1;
		}
		i++;
	}
	return (return_value);
}

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::string line;
		while (std::getline(std::cin, line))
		{
			std::cout << line << std::endl;
		}
	}
	return (ft_cat(ac, av));
}
