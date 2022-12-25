#include "Contact.hpp"

int Contact::_nbInst = 0;

int Contact::getNbInst(void)
{
    return Contact::_nbInst;
}

void Contact::create_info(void)
{
	std::string		input;

	std::cout << "Please input first name:" << std::endl;
	getline(std::cin, input);
	this->set_first_name(input);

	std::cout << "Please input last name:" << std::endl;
	getline(std::cin, input);
	this->set_last_name(input);

	std::cout << "Please input nickname:" << std::endl;
	getline(std::cin, input);
	this->set_nickname(input);

	std::cout << "Please input login:" << std::endl;
	getline(std::cin, input);
	this->set_login(input);

	std::cout << "Please input postal address:" << std::endl;
	getline(std::cin, input);
	this->set_post_address(input);

	std::cout << "Please input email address:" << std::endl;
	getline(std::cin, input);
	this->set_email_address(input);

	std::cout << "Please input phone number:" << std::endl;
	getline(std::cin, input);
	this->set_phone_number(input);

	std::cout << "Please input birthday date:" << std::endl;
	getline(std::cin, input);
	this->set_birthday(input);

	std::cout << "Please input favorite meal:" << std::endl;
	getline(std::cin, input);
	this->set_favorite_meal(input);

	std::cout << "Please input underwear color:" << std::endl;
	getline(std::cin, input);
	this->set_underwear_color(input);

	std::cout << "Please input darkest secret:" << std::endl;
	getline(std::cin, input);
	this->set_darkest_secret(input);

	Contact::_nbInst++;
	std::cout << "Info is completed" << std::endl;
	return ;
}
