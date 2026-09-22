#include <iostream>
#include <vector>
#include <string>
#include "../../Header/System/System.h"
#include "../../Header/DataFileProcessing/DataFileProcessing.h"



stClient ConvertClientDataLineToRecord(std::string& line, std::string delimiter)
{
	stClient client;
	std::vector <std::string> vClients = split(line, delimiter);

	client.accNumber = vClients[0];
	client.PinCode = vClients[1];
	client.cName = vClients[2];
	client.cPhone = vClients[3];
	client.accBalance = std::stod(vClients[4]);
	return client;
}

std::string ConvertClientRecordToDataLine(stClient& client, std::string& delimiter)
{
	return client.accNumber + delimiter + client.PinCode + delimiter + client.cName + delimiter + client.cPhone + delimiter + std::to_string(client.accBalance);
}