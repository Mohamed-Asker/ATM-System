#include <iostream>
#include <vector>
#include "scr/Header/Application/Application.h"
#include "scr/Header/DataFileProcessing/DataFileProcessing.h"


int main()
{
	std::vector <stClient> vClients = LoadClientDataFromFile(SystemCore::ClientDataFile, SystemCore::delimiter);
}