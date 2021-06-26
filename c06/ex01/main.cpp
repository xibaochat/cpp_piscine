#include <iostream>
#include <stdint.h>

struct Data
{
  int a;
  float b;
   std::string s;
} ;


uintptr_t serialize(Data* ptr)
{
	void *p = ptr;
	return uintptr_t(p);
}

Data* deserialize(uintptr_t raw)
{
	void * p = (void *)raw;
	return static_cast<Data *>(p);
}

int main()
{
	Data data;
	data.a = 42;
	data.b = 42.0f;
	data.s = "xibao";
	std::cout << "ADDRESS :" << &data << std::endl;
	std::cout << "serialize :" << serialize(&data) << std::endl;
	std::cout << "decode " << deserialize(serialize(&data)) << std::endl;
}
