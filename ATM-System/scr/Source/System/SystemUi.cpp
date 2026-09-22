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