#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdio>

void	display_str(std::string s)
{
	int		i;

	i = -1;
	while (++i < (int)s.length())
		putchar(toupper(s[i]));
}

int		main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (++i < ac)
			display_str(av[i]);
		std::cout << std::endl;
	}
	return (0);
}
