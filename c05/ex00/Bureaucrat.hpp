#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <stdexcept>

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
