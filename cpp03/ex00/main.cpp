# include "FragTrap.hpp"

int main()
{
	srand(time(NULL));
	FragTrap robot1("Marvin");
	FragTrap robot2("Bender");

	robot1.rangedAttack("Bender");
	robot2.takeDamage(20);
	robot1.show_info();
	robot2.show_info();

	robot1.meleeAttack("Bender");
	robot2.takeDamage(30);
	robot1.show_info();
	robot2.show_info();

	robot2.beRepaired(2);
	robot2.beRepaired(42);
	robot1.show_info();
	robot2.show_info();

	//randome attack action
	robot1.vaulthunter_dot_exe("Bender");
	robot2.takeDamage(10);

	robot1.vaulthunter_dot_exe("Bender");
	robot2.takeDamage(10);

	robot1.vaulthunter_dot_exe("Bender");
	robot2.takeDamage(20);

	robot1.vaulthunter_dot_exe("Bender");
	robot1.vaulthunter_dot_exe("Bender");
	robot2.takeDamage(20);
	robot1.show_info();
	robot2.show_info();

	std::cout << std::endl;

	return (0);
}
