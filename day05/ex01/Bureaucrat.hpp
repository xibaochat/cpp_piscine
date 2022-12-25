#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <stdexcept>
class Bureaucrat;
class Form;
#include "Form.hpp"
#define SLASH       "\e[4m"
#define GREEN       "\033[33;32m"
#define YELLOW      "\033[33;33m"
#define RED         "\033[33;31m"
#define MAGENTA     "\e[95m"
#define BLUE        "\033[1;34m"
#define CYAN        "\e[96m"
#define ORANGE      "\e[38;5;215m"
#define NC          "\033[0m"

class Bureaucrat
{
private:
	std::string const _name;
	int _grade;
	Bureaucrat(){}
public:
	Bureaucrat(std::string, int);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const &);
	Bureaucrat & operator=( Bureaucrat const &);
	Bureaucrat & operator<<( Bureaucrat const &);
	std::string const & getName() const;
	int const & getGrade() const;
	void increment();
	void decrement();
	void signForm(Form &);
	class GradeTooHighException: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

std::ostream & operator << (std::ostream & o, Bureaucrat const & src);

#endif
