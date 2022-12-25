# include "FragTrap.hpp"
# include "ScavTrap.hpp"

int main()
{
	srand(time(NULL));
	FragTrap robot1("Marvin");
	ScavTrap scav1("miaomiao");

	robot1.rangedAttack("miaomiao");
	scav1.takeDamage(20);

	scav1.meleeAttack("Marvin");
	robot1.takeDamage(20);

	robot1.vaulthunter_dot_exe("miaomiao");
	scav1.takeDamage(10);

	scav1.challengeNewcomer("Marvin");
	robot1.takeDamage(30);
	scav1.challengeNewcomer("Marvin");
	robot1.takeDamage(30);

	scav1.beRepaired(300);

	scav1.challengeNewcomer("Marvin");
	scav1.challengeNewcomer("Marvin");

	robot1.vaulthunter_dot_exe("miaomiao");
	scav1.takeDamage(20);
	robot1.vaulthunter_dot_exe("miaomiao");
	scav1.takeDamage(20);
	robot1.vaulthunter_dot_exe("miaomiao");
	scav1.takeDamage(20);
	robot1.vaulthunter_dot_exe("miaomiao");

    robot1.show_info();
	scav1.show_info();

	return (0);
}
