#ifndef OFFICEBLOCK_H
# define OFFICEBLOCK_H

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

class OfficeBlock
{
private:
	Intern *m_intern;
	OfficeBlock(OfficeBlock const &);
	OfficeBlock & operator=( OfficeBlock const &);
	int sign_grade;
	int executor_grade;
public:
	Bureaucrat *m_signer;
	Bureaucrat *m_executor;

	OfficeBlock(Intern &, Bureaucrat &, Bureaucrat &);
	OfficeBlock();
	~OfficeBlock();
	void set_intern(Intern &);
	void set_sign_bureau(Bureaucrat &);
	void set_exe_bureau(Bureaucrat &);
	void doBureaucracy(std::string, std::string);
	class intern_err: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class sign_err: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class exe_err: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

};

#endif
