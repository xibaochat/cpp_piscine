#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr_str = &str;
	std::string &ref_str = str;

	std::cout << "[Output str with point]:" << *ptr_str << std::endl;
	std::cout << "[Output str with ref  ]:" << ref_str << std::endl;

	return (0);
}
