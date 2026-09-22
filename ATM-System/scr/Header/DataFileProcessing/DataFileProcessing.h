#pragma once 
#include <iostream>
#include <vector>
#include "../../Header/System/System.h"

std::vector <std::string> split(std::string& line, std::string& delimiter);

stClient ConvertClientDataLineToRecord(std::string& line, std::string delimiter);

std::vector <stClient> LoadClientDataFromFile(const std::string& FileName, const std::string& delimiter);

std::string ConvertClientRecordToDataLine(stClient& client, std::string& delimiter);

void SaveDataToFile(std::vector <stClient>& vClients, std::string& FileName, std::string& delimiter);