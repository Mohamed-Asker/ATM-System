#include <iostream>
#include <vector>
#include "../../Header/System/System.h"
#include "../../Header/Helpers/Helpers.h"


namespace CheckBalance
{
	void ShowCheckBalanceScreen(std::vector <stClient>& vClients, std::string& accNumber)
	{
		ResetScreen();
		CheckBalance::PrintHeaderOfCheckBalance();
		for (stClient& tempClient : vClients)
		{
			if (tempClient.accNumber == accNumber)
			{
				std::cout << "Your balance is: " << tempClient.accBalance << "$\n";
				std::cout << SystemConfig::Separator;
				break;
			}
		}
		PressAnyKey("Press any key to go back to main menu");
	}
}