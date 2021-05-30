#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	srand(time(NULL));
	FragTrap robot1("Marvin");
	ScavTrap scav1("miaomiao");

	std::cout << CYAN <<  "---------ATTACK0------" << NC << std::endl;
	robot1.rangedAttack("miaomiao");
	scav1.takeDamage(20);

	std::cout << CYAN <<  "---------ATTACK1------" << NC << std::endl;
	scav1.challengeNewcomer("Marvin");
	robot1.takeDamage(20);

	std::cout << CYAN <<  "---------ATTACK2------" << NC << std::endl;
	robot1.vaulthunter_dot_exe("miaomiao");
	scav1.takeDamage(30);

	std::cout << CYAN <<  "---------ATTACK3------" << NC << std::endl;
	scav1.meleeAttack("Marvin");
	robot1.takeDamage(20);
	std::cout << CYAN <<  "---------REPAIR ARMOR------" << NC << std::endl;
	scav1.beRepaired(30);
	std::cout << CYAN <<  "---------ATTACK4------" << NC << std::endl;
	scav1.challengeNewcomer("Marvin");
	std::cout << CYAN <<  "---------ATTACK5------" << NC << std::endl;
	robot1.vaulthunter_dot_exe("miaomiao");
	robot1.vaulthunter_dot_exe("miaomiao");
	robot1.vaulthunter_dot_exe("miaomiao");
	robot1.vaulthunter_dot_exe("miaomiao");
	std::cout << CYAN <<  "---------SHOW VALUE------" << NC << std::endl;
	robot1.show_info();
	scav1.show_info();
	std::cout << CYAN <<  "---------DESTRUCTOR------" << NC << std::endl;
	return (0);
}
