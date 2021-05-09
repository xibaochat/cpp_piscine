#include "Pony.hpp"

Pony::~Pony()
{
	std::cout << "instance is destroyed" << std::endl;
}

void Pony::ShowInfo(void)
{
	std::cout << "name:" << this->_name << std::endl;
	std::cout << "sex" << this->_sex << std::endl;
	std::cout << "color:" << this->_color << std::endl;
	std::cout << "age:" << this->_age << std::endl;
	std::cout << "weight:" << this->_weight << std::endl;
}

Pony::Pony(std::string name, std::string sex, std::string color, int age, int weight):_name(name), _sex(sex), _color(color), _age(age), _weight(weight)
{}

void ponyOnTheHeap()
{
	Pony instance("Maobe", "F", "pink", 1, 2);
	instance.ShowInfo();
}

void ponyOnTheStack()
{
	Pony *pony = new Pony("petit pony", "M", "golded", 2, 2);
	pony->ShowInfo();
	delete pony;
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
}
