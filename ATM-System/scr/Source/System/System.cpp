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

namespace MainMenu
{
	void ExecuteMainMenuOption(std::vector <stClient>& vClients, std::string& accNumber)
	{
		bool logout = false;
		do
		{
			ResetScreen();
			MainMenu::PrintMainMenuScreen();
			switch (MainMenu::ReadMainMenuOption())
			{
			case enMainMenuOptions::mQuickWithdraw:
				QuickWithdraw::ShowQuickWithdrawScreen(vClients, accNumber);
				break;

			case enMainMenuOptions::mNoramlWithdraw:
				NormalWithdraw::ShowNormalWithdrawScreen(vClients, accNumber);
				break;

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