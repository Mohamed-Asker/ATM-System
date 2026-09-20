#include <iostream>
#include <vector>
#include <string>


std::vector <std::string> split(std::string& line, std::string& delimiter)
{
	std::size_t pos;
	std::string word = "";
	std::vector <std::string> vTokens;

	while ((pos = line.find(delimiter)) != std::string::npos)
	{
		word = line.substr(0, pos);
		if (word != "")
			vTokens.push_back(word);

		line.erase(0, pos + delimiter.length());
	}

	if (line != delimiter)
		vTokens.push_back(line);

	return vTokens;
}