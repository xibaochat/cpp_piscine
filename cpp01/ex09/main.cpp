#include "Logger.hpp"

int main()
{
	Logger instance("file");

	instance.log("logToFile", "to file:kitten is cute\n");
	instance.log("logToConsole", "Console:la vie est pas facile\n");
	instance.log("logToFile", "to file:doggy is cute\n");
	instance.log("logToFile", "to file:rabbit is cute\n");
	instance.log("logToFile", "to file:I AM cute\n");
	instance.log("logToConsole", "Console:I AM cute\n");
	return (0);
}
