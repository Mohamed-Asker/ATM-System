#include <iostream>
#include <string>
#include <iomanip>

void ResetScreen()
{
	system("cls");
}

std::string ReadText(std::string msg, short width)
{
	std::string text;
	std::cout << std::left << std::setw(width) << msg << ": ";
	std::getline(std::cin, text);
	return text;
}