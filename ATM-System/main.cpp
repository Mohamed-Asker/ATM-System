#include <iostream>
#include <vector>
#include "scr/Header/System/System.h"
#include "scr/Header/DataFileProcessing/DataFileProcessing.h"
#include "scr/Header/Login/Login.h"


int main()
{
	std::vector <stClient> vClients = LoadClientDataFromFile(SystemCore::ClientDataFile, SystemCore::delimiter);
	std::string accNumber;
	while (login(vClients, accNumber))
	{
		MainMenu::ExecuteMainMenuOption(vClients, accNumber);
	}
}