#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "wring number of arguments" << std::endl;
		return (0);
	}
	std::string line;
	std::string to_remove(av[2]);
    std::string to_add(av[3]);
	std::string file_name(av[1]);
	std::string content;
	size_t p = 0;
	if (to_remove.length() == 0 || to_add.length() == 0 || file_name.length() == 0)
    {
        std::cout << "Don't give empty string please" << std::endl;
        return (0);
   }
	std::ifstream ifs;
    std::ofstream fs;

	ifs.open(av[1]);
	file_name +=  ".replace";
	fs.open(file_name.c_str());
	if (ifs.is_open())
	{
		while ( getline (ifs,line) )
			content.append(line + "\n");
	}
	else
	{
		std::cout << "Cannot open the file" << std::endl;
		return (0);
	}
	ifs.close();
	if (to_remove.compare(to_add))
	 {
		 while ((p = content.find(to_remove, p)) != std::string::npos)
		 {
			 content.replace(p, to_remove.length(), to_add);
			 p += to_add.length();

		 }
	 }
	fs << content;
	fs.close();
}
