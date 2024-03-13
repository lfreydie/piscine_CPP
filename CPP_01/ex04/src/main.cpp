#include <iostream>
#include <fstream>
#include <sstream>

int	replaceContent(std::string infile, std::string s1, std::string s2)
{
	std::string		content;
	std::ifstream	ifs(infile.c_str());
	if (!ifs.is_open())
		return (std::cout << "Error: opening file " << infile << std::endl, 1);
	std::string		outfile = infile + ".replace";
	std::ofstream	ofs(outfile.c_str());
	if (!ofs.is_open())
		return (std::cout << "Error: opening file " << outfile << std::endl, 1);
	std::ostringstream buffer;
	buffer << ifs.rdbuf();
	content = buffer.str();
	if (s1.empty())
		return (std::cout << "Error: s1 is empty"<< std::endl, 1);
	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.erase(pos, s1.size());
		content.insert(pos, s2);
		pos += s2.size();
	}
	ofs << content;
	ifs.close();
	ofs.close();
	return (0);
}

int	main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "wrong arguments" << std::endl;
	else
		return (replaceContent(av[1], av[2], av[3]));
	return (0);
}
