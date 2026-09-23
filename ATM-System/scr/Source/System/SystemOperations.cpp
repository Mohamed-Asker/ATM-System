#include <iostream>
#include <vector>
#include "../../Header/System/System.h"
#include "../../Header/Helpers/Helpers.h"
#include "../../Header/DataFileProcessing/DataFileProcessing.h"


namespace CheckBalance
{
	void ShowCheckBalanceScreen(std::vector <stClient>& vClients, stClient& client)
	{
		ResetScreen();
		CheckBalance::PrintHeaderOfCheckBalance();
		std::cout << "Your balance is: " << client.accBalance << "$\n";
		std::cout << SystemConfig::Separator;
		PressAnyKey("Press any key to go back to main menu");
		
	}
}


namespace QuickWithdraw
{
	void ShowQuickWithdrawScreen(std::vector <stClient>& vClients, stClient& client)
	{
		ResetScreen();
		QuickWithdraw::PrintQuickWithdrawOptions();
		std::cout << "Your balance is: " << client.accBalance << "&\n";
		short Amount = ReadQuickWihdraw();

		if (Amount != 0)
		{
			if (client.accBalance < Amount)
				std::cout << "The amount exceeds your balance, make another choice";
			else
			{
				if (OperationsHelpers::ConfirmOperation("Are you sure you want to perform this trnasaction"))
				{
					for (stClient& tempClient : vClients)
					{
						if (tempClient.accNumber == tempClient.accNumber)
						{
							tempClient.accBalance = OperationsHelpers::CalculateNewBalance(tempClient.accBalance, Amount, false);
							std::cout << "Done successfully, new balance is: " << tempClient.accBalance << "&";
							SaveDataToFile(vClients, SystemCore::ClientDataFile, SystemCore::delimiter);
							client.accBalance = tempClient.accBalance;
			
							break;
						}

					}
				}
			}
			PressAnyKey("\nPress any key to go back to main menu");
		}
	}
}


namespace NormalWithdraw
{
	void ShowNormalWithdrawScreen(std::vector <stClient>& vClients, stClient& client)
	{
		ResetScreen();
		PrintHeaderOfNormalWithdraw(); 
		std::cout << "Your balance is: " << client.accBalance << "&\n";
		int Amount = ReadAmountWithdraw();
		
		if (client.accBalance < Amount)
			std::cout << "The amount exceeds your balance, make another choice";
		else
		{
			if (OperationsHelpers::ConfirmOperation("Are you sure you want to perform this transaction"))
			{
				for (stClient& tempClient : vClients)
				{
					if (tempClient.accNumber == client.accNumber)
					{
						{
							tempClient.accBalance = OperationsHelpers::CalculateNewBalance(tempClient.accBalance, Amount, false);
							std::cout << "Done successfully, new balance is: " << tempClient.accBalance << "$\n";
							SaveDataToFile(vClients, SystemCore::ClientDataFile, SystemCore::delimiter);
							client.accBalance = tempClient.accBalance;
						}
						break;
					}
				}
			}
		}
		PressAnyKey("\nPress any key to go back to main menu");
	}
}

namespace Deposit
{
	void ShowDepositScreen(std::vector <stClient>& vClients, stClient& client)
	{
		ResetScreen();
		PrintHeaderOfDepositScreen();
		std::cout << "Your balance is: " << client.accBalance << "&\n";
		int Amount = ReadPostiveNumber("Deposit Amount");

		if (OperationsHelpers::ConfirmOperation("Are you sure you want to perform this transaction"))
		{
			for (stClient& tempClient : vClients)
			{
				if (tempClient.accNumber == client.accNumber)
				{
					tempClient.accBalance = OperationsHelpers::CalculateNewBalance(tempClient.accBalance, Amount);
					std::cout << "Done Successfully, new balance is: " << tempClient.accBalance << "$\n";
					SaveDataToFile(vClients, SystemCore::ClientDataFile, SystemCore::delimiter);
					client.accBalance = tempClient.accBalance;
					PressAnyKey("Press any key to go back to main menu");
					break;
				}
			}
		}
	}
}