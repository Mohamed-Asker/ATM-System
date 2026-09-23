#include <iostream>
#include <iomanip>
#include "../../Header/System/System.h"


namespace MainMenu
{
	void PrintHeaderOfMainMenu()
	{
		std::cout << SystemConfig::Separator;
		printf("%*s", SystemConfig::PrintStart + 8, "MAIN MENU SCREEN\n");
		std::cout << SystemConfig::Separator;
	}

	void PrintMainMenuScreen()
	{
		PrintHeaderOfMainMenu();
		std::cout << "  [1] Quick Withdraw";
		std::cout << "\n  [2] Normal Withdraw";
		std::cout << "\n  [3] Deposit";
		std::cout << "\n  [4] Check Balance";
		std::cout << "\n  [5] Logout\n";
		std::cout << SystemConfig::Separator;
	}
}

namespace CheckBalance
{
	void PrintHeaderOfCheckBalance()
	{
		std::cout << SystemConfig::Separator;
		printf("%*s", SystemConfig::PrintStart + 10, "CHECK BALANCE SCREEN\n");
		std::cout << SystemConfig::Separator;
	}
}

namespace QuickWithdraw
{
	void PrintHeaderOfQuickWithdraw()
	{
		std::cout << SystemConfig::Separator;
		printf("%*s", SystemConfig::PrintStart + 10, "QUICK WITHDRAW SCREEN\n");
		std::cout << SystemConfig::Separator;
	}

	void PrintQuickWithdrawOptions()
	{
		PrintHeaderOfQuickWithdraw();
		std::cout << "  [1]20    [2]50    [3]100\n";
		std::cout << "  [4]200   [5]400   [6]600\n";
		std::cout << "  [7]800   [8]1000  [9]Exit\n";
		std::cout << SystemConfig::Separator;
	}
}


namespace NormalWithdraw
{
	void PrintHeaderOfNormalWithdraw()
	{
		std::cout << SystemConfig::Separator;
		printf("%*s", SystemConfig::PrintStart + 11, "NORMAL WITHDRAW SCREEN\n");
		std::cout << SystemConfig::Separator;
	}
}

namespace Deposit
{
	void PrintHeaderOfDepositScreen()
	{
		std::cout << SystemConfig::Separator;
		printf("%*s", SystemConfig::PrintStart + 7, "DEPOSIT SCREEN\n");
		std::cout << SystemConfig::Separator;
	}
}