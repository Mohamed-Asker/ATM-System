#include <iostream>
#include <iomanip>
#include "../../Header/System/System.h"

void PrintHeaderOfLoginScreen()
{
	std::cout << SystemConfig::Separator;
	printf("%*s", SystemConfig::PrintStart + 6, "LOGIN SCREEN\n");
	std::cout << SystemConfig::Separator;
}