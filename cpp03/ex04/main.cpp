#include "SuperTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	srand(time(NULL));
	// FragTrap ff("pink kitten");
	// ScavTrap ss("ss");
	// NinjaTrap nn("dirty shoes");
	// SuperTrap super_bao("bao");

	// super_bao.vaulthunter_dot_exe("pink kitten");//lost 25 ep
	// nn.ninjaShoebox(ss);
	// ss.rangedAttack("bao");
	// super_bao.takeDamage(ss.get_range_attack_damage());//lost 15 - 5 = 10
	// super_bao.show_info();
	FragTrap    frag("R2D2");
    ScavTrap    scav("Jeremouss");
    NinjaTrap   ninja("Ninja");
    SuperTrap   super("Super");

    std::cout << std::endl << std::endl;
    super.vaulthunter_dot_exe("Jeremouss");
    super.rangedAttack("Clapouss");
    super.meleeAttack("R2D2");
    frag.takeDamage(super.get_melee_attack_damage());
    std::cout << std::endl << std::endl;
    super.ninjaShoebox(ninja);
    super.ninjaShoebox(scav);
    super.ninjaShoebox(frag);
	frag.show_info();
	scav.show_info();
	ninja.show_info();
	super.show_info();
    std::cout << std::endl << std::endl;

        return (0);

}
