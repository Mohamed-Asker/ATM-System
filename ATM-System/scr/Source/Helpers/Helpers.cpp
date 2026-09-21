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
	std::getline(std::cin >> std::ws, text);
	return text;
}

void PressAnyKey(const std::string& msg)
{
	std::cout << msg << "...";
	system("pause > 0");
}

bool isNumberInRange(int number,int from, int to)
{
	return (number >= from && number <= to);
}

int ReadNubmerInRange(const std::string& msg, int from, int to)
{
	int number;
	while (true)
	{
		std::cout << msg << ": ";
		if (std::cin >> number && isNumberInRange(number, from, to))
			return number;

		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input.\n\n";
	}
}