#pragma once 
#include <iostream>
#include <vector>
#include "../../Header/Application/Application.h"

std::vector <std::string> split(std::string& line, std::string& delimiter);

stClient ConvertClientDataLineToRecord(std::string& line, std::string delimiter);

std::vector <stClient> LoadClientDataFromFile(const std::string& FileName, const std::string& delimiter);