# include "Victim.hpp"
# include "Sorcerer.hpp"

int main()
{
	Sorcerer obj("moster", "boss");
	Victim   vic("poor");
	std::cout << obj << std::endl;
	return (0);
}
