#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "../../Header/DataFileProcessing/DataFileProcessing.h"


std::vector <stClient> LoadClientDataFromFile(const std::string& FileName, const std::string& delimiter)
{
	std::fstream file;
	std::vector <stClient> vClients;
	file.open(FileName, std::ios::in);
	if (file.is_open())
	{
		std::string LineData;
		while (std::getline(file, LineData))
			vClients.push_back(ConvertClientDataLineToRecord(LineData, delimiter));

		file.close();
	}
	return vClients;
}


