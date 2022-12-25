#include "Contact.hpp"

int main(void)
{
	std::string input;
	Contact	user_info[NB_USER];

	std::cout << "Welcome to the useless phonebook :D" << std::endl;
	std::cout << "Please give me some input(ADD/SEARCH/EXIT) :D" << std::endl;
	std::cout << "Phonebook> ";
	while (getline (std::cin, input))
	{
		if(input.compare("ADD") == 0)
		{
			if (Contact::getNbInst() == NB_USER)
				std::cout << "Cannot add new contact" << std::endl;
			else
			{
				user_info[Contact::getNbInst()].create_info();
			}
		}
		else if (input.compare("EXIT") == 0)
			break;
		else if (input.compare("SEARCH") == 0)
		{
			if (Contact::getNbInst() == 0)
				std::cout << "No contact" << std::endl;
			else
				show_user_info(user_info);
		}
		std::cout << "Phonebook> ";
	}
	return (0);
}
