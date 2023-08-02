#pragma once

/********************************************* DO NOT MODIFY THIS FILE *********************************************/

#include <string>
#include <string_view>

std::string LoadTextFromFile(std::string_view fileName);
void SaveTextToFile(std::string_view fileName, std::string_view newCsvText);
