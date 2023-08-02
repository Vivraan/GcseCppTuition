/********************************************* DO NOT MODIFY THIS FILE *********************************************/

#include "FileOps.h"
#include <fstream>
#include <string_view>

std::string LoadTextFromFile(std::string_view fileName)
{
    std::ifstream file{fileName.data()};
    using It = std::istreambuf_iterator<char>;
    std::string text{It{file}, It{}};
    file.close();
    return text;
}

void SaveTextToFile(std::string_view fileName, const std::string_view newCsvText)
{
    std::ofstream file{fileName.data()};
    file << newCsvText;
    file.close();
}
