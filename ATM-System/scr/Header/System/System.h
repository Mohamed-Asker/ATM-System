#pragma once
#include <iostream>
#include <vector>


struct stClient
{
	std::string accNumber = "";
	std::string PinCode = "";
	std::string cName = "";
	std::string cPhone = "";
	double accBalance = 0;
};

namespace SystemCore
{
	extern std::string ClientDataFile;
	extern std::string delimiter;
}

namespace SystemConfig
{
	extern std::string Separator;
	extern short PrintStart;
}

namespace MainMenu
{
	void PrintMainMenuScreen();
	void ExecuteMainMenuOption(std::vector <stClient>& vClients, std::string& accNumber);
}


namespace CheckBalance
{
	void PrintHeaderOfCheckBalance();
	void ShowCheckBalanceScreen(std::vector <stClient>& vClients, std::string& accNumber);
}