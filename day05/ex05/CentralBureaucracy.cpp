#include <unistd.h>
#include "CentralBureaucracy.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

CentralBureaucracy::CentralBureaucracy():index(0), target_index(0)
{
	this->office_ptr = new OfficeBlock[20];
}

CentralBureaucracy::~CentralBureaucracy()
{
	delete [] office_ptr;
}

void CentralBureaucracy::eat(Bureaucrat & obj)
{
	if (this->index < 40)
	{
		if (this->index % 2 == 0)
			office_ptr[index/2].set_sign_bureau(obj);
		else
			office_ptr[index/2].set_exe_bureau(obj);
		std::cout << "OfficeBlock[" << this->index / 2 << "]" << (this->index % 2 == 0 ? " Signer :" : " Executor :") << obj.getGrade() << std::endl;
	}
	else
		std::cout << "Reject " << obj.getName() << " grade:" << obj.getGrade() << std::endl;
	this->index++;
}

void CentralBureaucracy::queueUp(std::string target)
{
	target_arr[this->target_index] = target;
	std::cout << "Push target[" << target_index << "] " << target << std::endl;
	target_index++;
}

void CentralBureaucracy::doBureaucracy(void)
{
	std::string f_names[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Intern slave;
	int i = 0;

	while (i < target_index)
	{
		int nb = rand() % 20;
		std::cout << YELLOW << "In CentralBureaucracy::doBureaucracy random block is " << nb << NC << " signer grade: " <<  this->office_ptr[nb].m_signer->getGrade() << " executor grade: " << this->office_ptr[nb].m_executor->getGrade() << std::endl;
		this->office_ptr[nb].set_intern(slave);
		this->office_ptr[nb].doBureaucracy(f_names[rand() % 3], this->target_arr[i]);
		i++;
	}
}
