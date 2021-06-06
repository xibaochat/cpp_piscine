# include "Victim.hpp"
# include "Sorcerer.hpp"
# include "Peon.hpp"
#include "ephemere.hpp"

int main()
{
	std::cout << "\n----------------TEST 1--------------" << std::endl;
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << "\n----------------TEST 2--------------" << std::endl;
	Sorcerer obj("ss", "killer");
	Victim   vic("vic");
	Victim *ptr = new Peon("pp");
	Victim *ptr2 = new Ephemere("ee");
	std::cout << obj << vic << *ptr << *ptr2 << std::endl;

	obj.polymorph(*ptr);
	ptr->getPolymorphed();

	obj.polymorph(vic);
	vic.getPolymorphed();

	obj.polymorph(*ptr2);
	ptr2->getPolymorphed();


	delete ptr;
	delete ptr2;

	return (0);
}
