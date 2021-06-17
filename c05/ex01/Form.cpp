#include "Form.hpp"
#include "Bureaucrat.hpp"

const char* Form::GradeTooLowException::what() const throw()
{
	return "[ERROR]too low";
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "[ERROR]too high";
}

Form::Form(std::string const name, int sign_grade, int exe_grade):_name(name), _sign_grade(sign_grade), _exe_grade(exe_grade), _is_signed(0)
{
	if (sign_grade < 1 || exe_grade < 1)
		throw(GradeTooHighException());
	if (sign_grade > 150 || exe_grade > 150)
		throw(GradeTooLowException());
}

Form::~Form(){}

Form & Form::operator=(Form const & rhs)
{
	if (this == &rhs)
        return (*this);
	this->_is_signed = rhs._is_signed;
	return (*this);
}

Form::Form(Form const &src):_name(src._name), _sign_grade(src._sign_grade), _exe_grade(src._exe_grade), _is_signed(src._is_signed){}

void Form::beSigned(Bureaucrat &src)
{
	if (src.getGrade() < this->_sign_grade)
		this->_is_signed = 1;
	else
	{
		throw(GradeTooLowException());
	}
	return ;
}

std::string const & Form::getName() const
{
	return (this->_name);
}

bool Form::is_signed(){return this->_is_signed;}

int const & Form::get_signed_grade()const {return this->_sign_grade;}

int const & Form::get_exe_grade() const {return this->_exe_grade;}

std::ostream & operator << (std::ostream & o, Form  const & src)
{
	o << BLUE << "Form       [Name] " NC << src.getName() << "😀" << BLUE << " [Sign_grade]:" << NC << src.get_signed_grade() << BLUE << " [exe_grade]:" << NC << src.get_exe_grade() << NC << std::endl;
	return (o);
}
