#include <iostream>
#include "../../Header/Helpers/Helpers.h"


namespace OperationsHelpers
{
	double CalculateBalanceAfterWithdraw(double accBalance, double WithdrawAmount)
	{
		return accBalance - WithdrawAmount;
	}

	bool ConfirmOperation(const std::string& msg)
	{
		char answer;
		std::cout << msg << "[Y,N]: ";
		std::cin >> answer;
		return std::tolower(answer) == 'y';
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