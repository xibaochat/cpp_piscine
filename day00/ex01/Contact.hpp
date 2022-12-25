#ifndef CONTACT_H
# define CONTACT_H

#define NB_USER 8
#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
    static int _nbInst;
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _login;
	std::string _post_address;
	std::string _email_address;
	std::string _phone_number;
	std::string _birthday;
	std::string _favorite_meal;
	std::string _underwear_color;
	std::string _dark_secret;
public:
    static int getNbInst(void);
	void create_info(void);
	void set_first_name(std::string input){_first_name = input;}
	void set_last_name(std::string input){_last_name = input;}
	void set_nickname(std::string input){_nickname = input;}
	void set_login(std::string input){_login = input;}
	void set_post_address(std::string input){_post_address = input;}
	void set_email_address(std::string input){_email_address = input;}
	void set_phone_number(std::string input){_phone_number = input;}
	void set_birthday(std::string input){_birthday = input;}
	void set_favorite_meal(std::string input){_favorite_meal = input;}
	void set_underwear_color(std::string input){_underwear_color = input;}
	void set_darkest_secret(std::string input){_dark_secret = input;}
	std::string get_first_name(void) const{return _first_name;}
	std::string get_last_name(void) const{return _last_name;}
	std::string get_nickname(void) const{return _nickname;}
	std::string get_login(void) const{return _login;}
	std::string get_post_address(void) const{return _post_address;}
	std::string get_email_address(void) const{return _email_address;}
	std::string get_phone_number(void) const{return _phone_number;}
	std::string get_birthday(void) const{return _birthday;}
	std::string get_favorite_meal(void) const{return _favorite_meal;}
	std::string get_underwear_color(void) const{return _underwear_color;}
	std::string get_dark_secret(void) const{return _dark_secret;}
};

void	show_nb_contact_info(Contact *list);
void	show_user_info(Contact *list);


#endif
