#include <iostream>
#include <vector>
#include "../../Header/System/System.h"
#include "../../Header/Helpers/Helpers.h"
#include "../../Header/Login/Login.h"


bool login(std::vector <stClient>& vClients)
{
	std::string accNumber;
	std::string PinCode;

	for (short Attempts = 3; Attempts >= 1; Attempts--)
	{
		ResetScreen();
		PrintHeaderOfLoginScreen();
		accNumber = ReadText("Account Number", 15);
		PinCode = ReadText("Pin Code", 15);
		
	}
	return true;
}