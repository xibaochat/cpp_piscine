#include <iostream>
#include <stdint.h>
#include "data.hpp"

Data::Data(char const c, int const a, float const f, std::string const s):c(c), nb_int(a), nb_float(f), s(s)
{}

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	Data *obj = new Data(65, 42, 42.024f, "conversion");
	std::cout << "ADDRESS :" << obj << std::endl;
	Data* decode = deserialize(serialize(obj));
	std::cout << "Deserialize :" << decode << std::endl;
	std::cout << "Deserialize " << "char c: " << decode->c << " int:" << decode->nb_int << " float:" << decode->nb_float << " string:" << decode->s << std::endl;

	delete obj;
}
