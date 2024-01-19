#include <iostream>
#include <string>
#include "assets.hpp"

void PrintColor(std::string color, std::string text)
{
    std::cout << color << text << RESET << std::endl;
}