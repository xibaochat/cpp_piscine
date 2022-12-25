#ifndef FORM_H
# define FORM_H

#include "Bureaucrat.hpp"

class Form
{
private:
	std::string const _name;
	int const _sign_grade;
	int const _exe_grade;
	bool _is_signed;
public:
	Form(std::string const, int sign_grade, int exe_grade);
	Form(Form const &);
	~Form();
	Form & operator=( Form const &);
	Form & operator<<( Form const &);
	void beSigned(Bureaucrat &);
	std::string const & getName() const;
	bool is_signed();
	int const & get_signed_grade() const;
	int const & get_exe_grade() const;
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

std::ostream & operator << (std::ostream & o, Form const & src);

#endif
