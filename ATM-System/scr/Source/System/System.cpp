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
	void ExecuteMainMenuOption(std::vector <stClient>& vClients, stClient& client)
	{
		bool logout = false;
		do
		{
			ResetScreen();
			MainMenu::PrintMainMenuScreen();
			switch (MainMenu::ReadMainMenuOption())
			{
			case enMainMenuOptions::mQuickWithdraw:
				QuickWithdraw::ShowQuickWithdrawScreen(vClients, client);
				break;

			case enMainMenuOptions::mNoramlWithdraw:
				NormalWithdraw::ShowNormalWithdrawScreen(vClients, client);
				break;

			case enMainMenuOptions::mDeposit:
				Deposit::ShowDepositScreen(vClients, client);
				break;

			case enMainMenuOptions::mCheckBalance:
				CheckBalance::ShowCheckBalanceScreen(vClients, client);
				break;

			case enMainMenuOptions::mLogout:
				logout = true;
				break;
			}
		} while (!logout);
	}
}