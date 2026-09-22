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

bool ConfirmOperation(const std::string& msg);

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
	void ExecuteMainMenuOption(std::vector <stClient>& vClients, std::string& accNumber);
}


namespace CheckBalance
{
	void PrintHeaderOfCheckBalance();
	void ShowCheckBalanceScreen(std::vector <stClient>& vClients, std::string& accNumber);
}


namespace QuickWithdraw
{
	enum enQuickWithdrawOptions
	{
		q20 = 20, q50 = 50, q100 = 100,
		q200 = 200, q400 = 400, q600 = 600,
		q800 = 800, q1000 = 1000, qExit = 9
	};

	void PrintQuickWithdrawOptions();
	enQuickWithdrawOptions ReadQuickWihdrawOption();
	double CalculateBalanceAfterWithdraw(double accBalance, double WithdrawAmount);
	void ShowQuickWithdrawScreen(std::vector <stClient>& vClients, std::string& accNumber);
}

namespace NormalWithdraw
{
	void PrintHeaderOfNormalWithdraw();
	int ReadAmountWithdraw();
	void ShowNormalWithdrawScreen(std::vector <stClient>& vClients, std::string& accNumber);
}