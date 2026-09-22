#include <iostream>
#include "../../Header/Helpers/Helpers.h"


bool ConfirmOperation(const std::string& msg)
{
	char answer;
	std::cout << msg << "[Y,N]: ";
	std::cin >> answer;
	return std::tolower(answer) == 'y';
}


namespace QuickWithdraw
{
	double CalculateBalanceAfterWithdraw(double accBalance, double WithdrawAmount)
	{
		return accBalance - WithdrawAmount;
	}
}

namespace NormalWithdraw
{
	int ReadAmountWithdraw()
	{
		while (true)
		{
			int Amount = ReadPostiveNumber("Enter an amount multiple of 5's");
			if ((Amount % 5 == 0))
				return Amount;
		}
	}
}