#include <iostream>
#include <fstream>

int get_lens(char *argv)
{
	int count = 0;
	while(argv[++count])
		;
	return (count);
}

int main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	std::string line;
	std::ifstream myfile (av[1]);
	std::ofstream replace_file ("FILENAME.replace");
	if (!myfile.good() || !replace_file.good())
	{
		std::cout << "stream is not good";
		return (0);
	}
	if (myfile.is_open())
	{
		while ( getline (myfile,line) )
		{
			replace_file << line << std::endl;
		}
		myfile.close();
	}
	else
	{
		std::cout << "Unable to open file";
		return (0);
	}

	std::ifstream r_myfile ("FILENAME.replace");
	std::ofstream w_myfile ("WFILENAME.replace");
	if (r_myfile.good())
	{
		while (getline(r_myfile, line))
		{
			size_t p = line.find(av[2]);
			while (p != std::string::npos)
			{
				line.replace(p, get_lens(av[2]), av[3]);
				std::cout << line << std::endl;
				p = line.find(av[2], p + get_lens(av[3]));
			}
			w_myfile << line << std::endl;
		}
	}
	return 0;
}
