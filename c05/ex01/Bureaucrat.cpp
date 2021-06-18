#include "Bureaucrat.hpp"
#include "Form.hpp"

int const & Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::string const & Bureaucrat::getName() const
{
	return (this->_name);
}

Bureaucrat::Bureaucrat(std::string const name, int grade):_name(name), _grade(grade)
{
	if (_grade < 1)
		throw(GradeTooHighException());
	if (_grade > 150)
		throw(GradeTooLowException());
	return ;
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this == &rhs)
        return (*this);
	this->_grade = rhs._grade;
	return (*this);
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
	return ;
}

std::ostream & operator << (std::ostream & o, Bureaucrat  const & src)
{
	o << BLUE << "Bureaucrat [Name] " NC << src.getName() << "😀" << BLUE << " [Grade]:" << NC << src.getGrade() << std::endl;
	return (o);
}

void Bureaucrat::decrement()
{
	this->_grade++;
	if (_grade > 150)
		throw(GradeTooLowException());
}

void Bureaucrat::increment()
{
	this->_grade--;
	if (_grade < 1)
		 throw(GradeTooHighException());
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "[ERROR]too low";
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "[ERROR]too high";
}

void Bureaucrat::signForm(Form &src)
{
	if (src.is_signed() == true)
		std::cout << "bureaucrat:" << this->_name << " can't sign " << src.getName() << " because it is already signed" << std::endl;
	else
	{
		try
		{
			src.beSigned(*this);
			std::cout << "bureaucrat:" << this->_name << " sign " << src.getName() << std::endl;
		}
		catch(std::exception &e)
		{
			std::cerr << RED << e.what() << NC << " bureaucrat:" << this->_name << " can't sign " << src.getName() << " because Bureaucrat is lower than Form" << std::endl;
		}
	}
}
