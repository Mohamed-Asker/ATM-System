#pragma once
#include <iostream>

void ResetScreen();

std::string ReadText(std::string msg, short width = 0);

void PressAnyKey(const std::string& msg);