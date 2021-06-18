#include "OfficeBlock.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

OfficeBlock::OfficeBlock(Intern &intern, Bureaucrat & signer, Bureaucrat & executor)
{
	this->m_intern = &intern;
	this->m_signer = &signer;
	this->m_executor = &executor;
}

OfficeBlock::OfficeBlock()
{
	this->m_intern = NULL;
    this->m_signer = NULL;
    this->m_executor = NULL;
}

OfficeBlock::~OfficeBlock(){}

void OfficeBlock::set_intern(Intern &intern)
{
	this->m_intern = &intern;
}

void OfficeBlock::set_sign_bureau(Bureaucrat &b)
{
	this->m_signer = &b;
}

void OfficeBlock::set_exe_bureau(Bureaucrat &b)
{
	this->m_executor = &b;
}

const char* OfficeBlock::intern_err::what() const throw()
{
	return "[INTERN_ERROR]";
}

const char* OfficeBlock::sign_err::what() const throw()
{
	return "[SIGN_ERROR]";
}

const char* OfficeBlock::exe_err::what() const throw()
{
	return "[EXE_ERROR]";
}

void OfficeBlock::doBureaucracy(std::string form, std::string target)
{
	Form *ptr_f;
	if (!this->m_intern)
		throw(intern_err());
	if (!this->m_signer)
		throw(sign_err());
	if (!this->m_executor)
		throw(exe_err());
	if (!(ptr_f = this->m_intern->makeForm(form, target)))
		return ;
	try
	{
		ptr_f->beSigned(*(this->m_signer));
		ptr_f->execute(*(this->m_executor));
		std::cout << *ptr_f << std::endl;
		delete ptr_f;
	}
	catch(std::exception &e)
	{
		delete ptr_f;
		std::cerr << RED << e.what() << NC << std::endl;
	}


}
