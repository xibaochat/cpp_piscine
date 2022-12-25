#include "Pony.hpp"

void ponyOnTheStack(void)
{
	Pony baby1("Maobe", "F", "pink", 1, 2, "call stack");
	baby1.ShowInfo();
	baby1.Pony_eat();
	baby1.Pony_sleep();
	baby1.Pony_play();
}

void ponyOnTheHeap(void)
{
	Pony *baby2 = new Pony("petit pony", "M", "golden", 2, 2, "call Heap");
	baby2->ShowInfo();
	baby2->Pony_eat();
	baby2->Pony_sleep();
	baby2->Pony_play();
	delete baby2;
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
}
