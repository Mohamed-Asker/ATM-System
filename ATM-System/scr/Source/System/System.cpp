#include <iostream>
#include <vector>
#include "../../Header/Helpers/Helpers.h"
#include "../../Header/System/System.h"




namespace SystemCore
{
	std::string ClientDataFile = "D:/MA-DevVault/Projects/Banking-System/Banking-system/Data/ClientsData.txt";
	std::string delimiter = "#//#";
}

namespace SystemConfig
{
	std::string Separator = "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n";
	short PrintStart = 25;
}

enum enMainMenuOptions
{
	mQuickWithdraw = 1,
	mNoramlWithdraw = 2,
	mDeposit = 3,
	mCheckBalance = 4,
	mLogout = 5
};


enMainMenuOptions ReadMainMenuOption()
{
	return static_cast<enMainMenuOptions>(ReadNubmerInRange("Choose what do you want to do[1:5]:", 1, 5));
}

namespace MainMenu
{
	void ExecuteMainMenuOption(std::vector <stClient>& vClients, std::string& accNumber)
	{
		bool logout = false;
		do
		{
			ResetScreen();
			MainMenu::PrintMainMenuScreen();
			switch (ReadMainMenuOption())
			{


			case enMainMenuOptions::mCheckBalance:
				CheckBalance::ShowCheckBalanceScreen(vClients, accNumber);
				break;

			case enMainMenuOptions::mLogout:
				logout = true;
				break;
			}
		} while (!logout);
	}
}