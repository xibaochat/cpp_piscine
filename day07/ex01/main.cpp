#include "iter.hpp"

int main()
{
	std::cout << "--------Int TEST---------" << std::endl;
	int foo [5] = { 16, 2, 77, 40, 12071 };
	iter<int const >(foo, 5, f);

	std::cout << "--------char TEST---------" << std::endl;
	char bar[6] = "salut";
	iter<char const>(bar, 5, f);

	std::cout << "--------Str TEST---------" << std::endl;
	std::string colour[4] = { "Blue", "Red",
                              "Orange", "Yellow" };
	iter<std::string const>(colour, 4, f);

	std::cout << "--------Double TEST---------" << std::endl;
	double ff[3] = {42.17, 15.21, 10.102};
	iter<double const>(ff, 3, f);

	return (0);
}
