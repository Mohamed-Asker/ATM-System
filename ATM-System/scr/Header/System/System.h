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
namespace OperationsHelpers

{
	double CalculateNewBalance(double accBalance, double Amount, bool Deposit = true);
	bool ConfirmOperation(const std::string& msg);
}

namespace MainMenu
{
	enum enMainMenuOptions
	{
		mQuickWithdraw = 1,
		mNoramlWithdraw = 2,
		mDeposit = 3,
		mCheckBalance = 4,
		mLogout = 5
	};

	enMainMenuOptions ReadMainMenuOption();
	void PrintMainMenuScreen();
	void ExecuteMainMenuOption(std::vector <stClient>& vClients, stClient& client);
}


namespace CheckBalance
{
	void PrintHeaderOfCheckBalance();
	void ShowCheckBalanceScreen(std::vector <stClient>& vClients, stClient& client);
}


namespace QuickWithdraw
{
	void PrintQuickWithdrawOptions();
	short ReadQuickWihdraw();
	void ShowQuickWithdrawScreen(std::vector <stClient>& vClients, stClient& client);
}

namespace NormalWithdraw
{
	void PrintHeaderOfNormalWithdraw();
	int ReadAmountWithdraw();
	void ShowNormalWithdrawScreen(std::vector <stClient>& vClients, stClient& client);
}

namespace Deposit
{
	void PrintHeaderOfDepositScreen();
	void ShowDepositScreen(std::vector <stClient>& vClients, stClient& client);
}