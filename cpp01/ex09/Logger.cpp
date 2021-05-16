#include "Logger.hpp"

Logger::Logger(std::string const &filename)
{
	this->filename = filename;
	return ;
}

void Logger::logToConsole(std::string const &str)
{
	std::cout << str << std::endl;
	this->ofs.open(this->filename.c_str(), std::ios_base::app);
	this->ofs << str;
	this->ofs.close();
	return ;
}

void Logger::logToFile(std::string const &str)
{
//	this->logToConsole(str);
	std::cout << str << std::endl;
	this->ofs.open(this->filename.c_str(), std::ios_base::app);
	this->ofs << str;
	this->ofs.close();
	return ;
}

std::string const Logger::makeLogEntry(std::string const &str)
{
	time_t rawtime;
	struct tm * timeinfo;
	std::string res;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	res = asctime(timeinfo);
	return (res + str);
}

void Logger::log(std::string const & dest, std::string const & message)
{
	typedef void (Logger::*log_MemFn) (std::string const & dest);
	log_MemFn logs[2] = {&Logger::logToConsole, &Logger::logToFile};
	std::string r_str;
	if (dest == "logToConsole")
	{
		r_str = this->makeLogEntry(message);
		(this->*(logs[0]))(r_str);
	}
	else if (dest == "logToFile")
	{
		r_str = this->makeLogEntry(message);
		(this->*(logs[1]))(r_str);
	}
	return ;
}
