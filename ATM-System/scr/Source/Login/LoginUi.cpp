#include <iostream>
#include <iomanip>
#include "../../Header/System/System.h"

void PrintHeaderOfLoginScreen(short number)
{
	std::cout << SystemConfig::Separator;
	printf("%*s", SystemConfig::PrintStart + 6, "LOGIN SCREEN\n");
	std::cout << SystemConfig::Separator;
	std::cout << "You have " << number << " attempts to log in:-\n";
}