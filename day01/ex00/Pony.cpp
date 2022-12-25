#include "Pony.hpp"

Pony::~Pony()
{
	std::cout << "instance is destroyed :(" << std::endl;
}

void Pony::ShowInfo(void) const
{
	std::cout << "Name:" << this->_name << std::endl;
	std::cout << "Sex:" << this->_sex << std::endl;
	std::cout << "Color:" << this->_color << std::endl;
	std::cout << "Age:" << this->_age << std::endl;
	std::cout << "Weight:" << this->_weight << std::endl;
}

Pony::Pony(std::string name, std::string sex, std::string color, int age, int weight, std::string call):_name(name), _sex(sex), _color(color), _age(age), _weight(weight), _call(call)
{}

void Pony::Pony_eat(void) const
{
	std::cout << this->_name << " " << this->_call << " is eating:D" << std::endl;
}

void Pony::Pony_sleep(void) const
{
	std::cout << this->_name << " " << this->_call <<" is sleeping zzz" << std::endl;
}

void Pony::Pony_play(void) const
{
	std::cout << this->_name << " " << this->_call << " is playing happily ::DD" << std::endl;
}
