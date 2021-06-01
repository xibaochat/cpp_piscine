#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	srand(time(NULL));
	// std::cout << std::endl << "NINJA SPE TESTS" << std::endl;

    // ScavTrap s("sisi");
    // ClapTrap c("coco");
	// NinjaTrap n("nana");
    // FragTrap f("fafa");

    // n.ninjaShoebox(s);
    // n.ninjaShoebox(c);
    // n.ninjaShoebox(f);
	// FragTrap ft = FragTrap( );
	// FragTrap ft2 = FragTrap("Kakashi-Sensei");
	// FragTrap ft3 = FragTrap(ft2);

	// std::cout << std::endl;

	// std::cout << "Started with " << ft2.get_name( ) << std::endl;
	// int i = 0;
	// while ( i < 5 ) {
	// 	ft2.vaulthunter_dot_exe( "Vickings" );
	// 	std::cout << std::endl;
	// 	i++;
	// }

	// std::cout << std::endl;
	// std::cout << std::endl;

	// ScavTrap st = ScavTrap( );
	// ScavTrap st2 = ScavTrap("CL4P-TP");
	// ScavTrap st3 = ScavTrap(st2);

	// std::cout << std::endl;

	// std::cout << "Started with " << st2.get_name( ) << std::endl;
	// i = 0;
	// srand(time(NULL));

	// while ( i < 3 ) {
	// 	st2.challengeNewcomer("pourquoi stp");
	// 	std::cout << std::endl;
	// 	i++;
	// }

	// std::cout << std::endl;
	// std::cout << std::endl;

	// ClapTrap ct = ClapTrap("SIMPLE");//sauf name, tous les value sont 0

	// NinjaTrap nt = NinjaTrap("Naruto-san");
	// NinjaTrap nt2 = NinjaTrap("Sasuke-san");

	// std::cout << std::endl;

	// std::cout << "start with the ninja : " << st.get_name( ) << std::endl;

	// nt.ninjaShoebox( ct );
	// nt.ninjaShoebox( nt2 );
	// nt.ninjaShoebox( ft2 );
	// nt.ninjaShoebox( st2 );

	// std::cout << std::endl;
	ClapTrap    *clap = new FragTrap("Clap");
    FragTrap    frag("R2D2");
    ScavTrap    scav("Jeremouss");
    NinjaTrap   *ninja = new NinjaTrap("Ninja");

    std::cout << std::endl << std::endl;
    ninja->ninjaShoebox(*clap);
    ninja->ninjaShoebox(frag);
    ninja->ninjaShoebox(scav);
	ninja->show_info();
    delete clap;
    delete ninja;
    return (0);

	std::cout << std::endl;
	return (0);
}
