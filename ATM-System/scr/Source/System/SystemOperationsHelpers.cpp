#include <iostream>
#include "../../Header/Helpers/Helpers.h"


namespace OperationsHelpers
{
	double CalculateNewBalance(double accBalance, double Amount, bool Deposit)
	{
		return (Deposit) ? accBalance + Amount : accBalance - Amount;
	}

	bool ConfirmOperation(const std::string& msg)
	{
		char answer;
		std::cout << msg << "[Y,N]: ";
		std::cin >> answer;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
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