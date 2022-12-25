#include "Contact.hpp"

void	truncate(std::string str, size_t width)
{
	if (str.length() > width)
		std::cout << "|" + str.substr(0, width - 1) + ".";
	else
		std::cout << "|" <<  std::setw(width) << str;
}

void	show_user_info(Contact *list)
{
	int		i;
	std::string	index_s;

	i = -1;
	truncate("index", 10);
	truncate("first name", 10);
	truncate("last name", 10);
	truncate("nickname", 10);
	std::cout << "|" << std::endl;
	while(++i < Contact::getNbInst())
	{
		index_s = i + '0';
		truncate(index_s, 10);
		truncate(list[i].get_first_name(), 10);
		truncate(list[i].get_last_name(), 10);
		truncate(list[i].get_nickname(), 10);
		std::cout << "|" << std::endl;
	}
	show_nb_contact_info(list);
}

int		is_valid_input(std::string str)
{
	int i;

	i = -1;
	if (str.length() != 1)
		return (0);
	if (!isdigit(str[0]))
		return (0);
	if (str[0] - '0' >= Contact::getNbInst())
		return (0);
	return (1);
}

void	show_every_field(Contact instance)
{
	std::cout <<  "first name:" << instance.get_first_name() << std::endl;
	std::cout <<  "last name:" << instance.get_last_name() << std::endl;
	std::cout <<  "nickname:" << instance.get_nickname() << std::endl;
	std::cout <<  "login:" << instance.get_login() << std::endl;
	std::cout <<  "postal address:" << instance.get_post_address() << std::endl;
	std::cout <<  "email address:" << instance.get_email_address() << std::endl;
	std::cout <<  "phone number:" << instance.get_phone_number() << std::endl;
	std::cout <<  "birthday date:" << instance.get_birthday() << std::endl;
	std::cout <<  "favorite meal:" << instance.get_favorite_meal() << std::endl;
	std::cout <<  "underwear color:" << instance.get_underwear_color() << std::endl;
	std::cout <<  "darkest secret:" << instance.get_dark_secret() << std::endl;
}

void	show_nb_contact_info(Contact *list)
{
    std::string input;

	std::cout << "Type in contact index :"		\
			  << std::endl;
	while (getline (std::cin, input))
	{
		if (!is_valid_input(input))
		{
			std::cout << "Invalid index, in total, there are " \
					  << Contact::getNbInst() << " user" << std::endl;
			continue;
		}
		else
		{
			show_every_field(list[input[0] - 48]);
			break;
		}
		std::cout << "Type in contact index :"	\
				  << std::endl;
	}
}
