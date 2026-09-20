#include <iostream>
#include <vector>
#include "../../Header/System/System.h"
#include "../../Header/Helpers/Helpers.h"
#include "../../Header/Login/Login.h"



bool FindClientByAccountNumberAndPinCode(std::vector <stClient>& vClients, std::string& accNumber, std::string& PinCode, stClient& client)
{
	for (stClient& tempClient : vClients)
	{
		if (tempClient.accNumber == accNumber && tempClient.PinCode == PinCode)
		{
			client = tempClient;
			return true;
		}
	}
	return false;
}



bool login(std::vector <stClient>& vClients, stClient& client)
{
	std::string accNumber;
	std::string PinCode;

	for (short Attempts = 3; Attempts >= 1; Attempts--)
	{

		ResetScreen();
		PrintHeaderOfLoginScreen(Attempts);
		accNumber = ReadText("Account Number", 15);
		PinCode = ReadText("Pin Code", 15);

		if (FindClientByAccountNumberAndPinCode(vClients, accNumber, PinCode, client))
			return true;
		else
		{
			std::cout << "\nInvalid Account Number Or PinCode.";
				if (Attempts ==  1)
				{
					std::cout << "\nYou don't have any attempts to log in.";
					std::cout << "\nTry after 5 minutes.";
					return false;
				}
		}
		PressAnyKey("\nPress any key to continue");
	}
}