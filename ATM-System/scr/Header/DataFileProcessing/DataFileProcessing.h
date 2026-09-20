#pragma once 
#include <iostream>
#include <vector>
#include "../../Header/System/System.h"

std::vector <std::string> split(std::string& line, std::string& delimiter);

stClient ConvertClientDataLineToRecord(std::string& line, std::string delimiter);

std::vector <stClient> LoadClientDataFromFile(const std::string& FileName, const std::string& delimiter);