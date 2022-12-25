#ifndef LOGGER_H
# define LOGGER_H
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <sstream>

class Logger
{
private:
	void logToConsole(std::string const &str);
	void logToFile(std::string  const &str);
	std::string filename;
	std::ofstream ofs;
	std::string const makeLogEntry(std::string const &);
public:
	Logger(std::string const &);
	void log(std::string const &, std::string const &);
};

#endif
