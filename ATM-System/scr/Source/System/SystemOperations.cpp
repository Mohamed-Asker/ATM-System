#include <iostream>
#include <vector>
#include "../../Header/System/System.h"
#include "../../Header/Helpers/Helpers.h"
#include "../../Header/DataFileProcessing/DataFileProcessing.h"


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


namespace QuickWithdraw
{
	void ShowQuickWithdrawScreen(std::vector <stClient>& vClients, std::string& accNumber)
	{
		char answer;
		ResetScreen();
		QuickWithdraw::PrintQuickWithdrawOptions();

		for (stClient& tempClient : vClients)
		{
			if (tempClient.accNumber == accNumber)
			{
				std::cout << "Your balance is: " << tempClient.accBalance << "&\n";
				enQuickWithdrawOptions WithdrawOption = ReadQuickWihdrawOption();

				if (WithdrawOption != enQuickWithdrawOptions::qExit)
				{
					if (tempClient.accBalance < WithdrawOption)
						std::cout << "The amount exceeds your balance, make another choice";
					else
					{
						std::cout << "Are you sure you want to perform this transaction[Y,N]: ";
						std::cin >> answer;
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

						if (std::tolower(answer) == 'y')
						{
							tempClient.accBalance = CalculateBalanceAfterWithdraw(tempClient.accBalance, WithdrawOption);
							std::cout << "Done successfully, new balance is: " << tempClient.accBalance << "&";
						}
					}
					PressAnyKey("\nPress any key to go back to main menu");
				}
			}
			break;
		}
		SaveDataToFile(vClients, SystemCore::ClientDataFile, SystemCore::delimiter);
	}
}