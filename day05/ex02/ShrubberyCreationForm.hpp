#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string _target;
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm & operator=( ShrubberyCreationForm const &);
	virtual void beExecuted() const;
	class File_err: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};


};

#endif
