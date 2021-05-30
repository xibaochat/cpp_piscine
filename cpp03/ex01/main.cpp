# include "FragTrap.hpp"
# include "ScavTrap.hpp"

int main()
{
	srand(time(NULL));
	FragTrap robot1("Marvin");
	FragTrap robot2("Bender");
	ScavTrap scav1("miaomiao");
	ScavTrap scav2("pink_kitten");

	robot1.rangedAttack("miaomiao");
	scav1.takeDamage(20);

	scav2.meleeAttack("Marvin");
	robot1.takeDamage(20);

	robot2.vaulthunter_dot_exe("pink_kitten");
	scav2.takeDamage(30);

	scav1.challengeNewcomer("Bender");
	robot2.takeDamage(20);
	scav2.challengeNewcomer("Marvin");
	robot1.takeDamage(20);

	scav2.beRepaired(30);

	scav1.challengeNewcomer("Marvin");
	scav1.challengeNewcomer("Marvin");

	robot2.vaulthunter_dot_exe("pink_kitten");
	robot2.vaulthunter_dot_exe("pink_kitten");
	robot2.vaulthunter_dot_exe("pink_kitten");
	robot2.vaulthunter_dot_exe("pink_kitten");
	robot1.show_info();
	robot2.show_info();
	scav1.show_info();
	scav2.show_info();


	return (0);
}
