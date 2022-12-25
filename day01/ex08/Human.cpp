#include "Human.hpp"

typedef  void (Human::*action_MemFn) (std::string const & target);

void Human::meleeAttack(std::string const & target)
{
	std::cout << "using meleeAttack to " << target << std::endl;
	return ;
}

void Human::rangedAttack(std::string const & target)
{
	std::cout << "using rangedAttack to " << target << std::endl;
	return ;
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout << "using intimidatingShout to " << target << std::endl;
	return ;
}

void Human::action(std::string const & action_name, std::string const & target)
{
	std::string actionStr[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	action_MemFn actions[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	int i;

	i = 0;
	while (i < 3)
	{
		if (actionStr[i] == action_name)
		{
			(this->*(actions[i]))(target);
			break;
		}
		i++;
	}
	return;
}
