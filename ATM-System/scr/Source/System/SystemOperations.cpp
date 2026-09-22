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
		ResetScreen();
		QuickWithdraw::PrintQuickWithdrawOptions();

		for (stClient& tempClient : vClients)
		{
			if (tempClient.accNumber == accNumber)
			{
				std::cout << "Your balance is: " << tempClient.accBalance << "&\n";
				short Amount = ReadQuickWihdraw();

				if (Amount != 0)
				{
					if (tempClient.accBalance < Amount)
						std::cout << "The amount exceeds your balance, make another choice";
					else
					{
						if (OperationsHelpers::ConfirmOperation("Are you sure you want to perform this trnasaction"))
						{
							tempClient.accBalance = OperationsHelpers::CalculateBalanceAfterWithdraw(tempClient.accBalance, Amount);
							std::cout << "Done successfully, new balance is: " << tempClient.accBalance << "&";
							SaveDataToFile(vClients, SystemCore::ClientDataFile, SystemCore::delimiter);
						}
					}
					PressAnyKey("\nPress any key to go back to main menu");
				}
			}
			break;
		}
	}
}


namespace NormalWithdraw
{
	void ShowNormalWithdrawScreen(std::vector <stClient>& vClients, std::string& accNumber)
	{
		ResetScreen();
		PrintHeaderOfNormalWithdraw(); 
		int Amount;

		for (stClient& tempClient : vClients)
		{
			if (tempClient.accNumber == accNumber)
			{
				Amount = ReadAmountWithdraw();
				if (OperationsHelpers::ConfirmOperation("Are you sure you want to perform this transaction"))
				{
					tempClient.accBalance = OperationsHelpers::CalculateBalanceAfterWithdraw(tempClient.accBalance, Amount);
					std::cout << "Done successfully, new balance is: " << tempClient.accBalance << "$\n";
					SaveDataToFile(vClients, SystemCore::ClientDataFile, SystemCore::delimiter);
				}

				break;
			}
		}
		PressAnyKey("Press any key to go back to main menu");
	}
}