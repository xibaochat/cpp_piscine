#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form(target, 145, 137), _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src):Form(src){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	Form::operator=(rhs);
	return (*this);
}

const char* ShrubberyCreationForm::File_err::what() const throw()
{
	return "[ERROR]cann't open file";
}

void ShrubberyCreationForm::beExecuted() const
{
	std::string filename(this->_target + "_shrubbery");
	std::ofstream fs;
	fs.open(filename.c_str());
	if (!fs.is_open())
	{
		throw(File_err());
	}
	else
	{
		fs  << "                 # #### ####			" << std::endl;
        fs << "               ### \\/#|### |/####		" << std::endl;
        fs << "              ##\\/#/ \\||/##/_/##/_#	" << std::endl;
        fs << "            ###  \\/###|/ \\/ # ###	" << std::endl;
        fs << "          ##_\\_#\\_\\## | #/###_/_####" << std::endl;
        fs << "         ## #### # \\ #| /  #### ##/##	" << std::endl;
        fs << "          __#_--###`  |{,###---###-~	" << std::endl;
        fs << "                    \\ }{				" << std::endl;
        fs << "                     }}{				" << std::endl;
        fs << "                     }}{				" << std::endl;
        fs << "                     {{}				" << std::endl;
        fs << "               , -=-~{ .-^- _			" << std::endl;
        fs << "                     `}				" << std::endl;
        fs << "                      {				" << std::endl;
		fs.close();
	}
}
