#include <iostream>
#include <string>
#include "assets.cpp"

void PrintColor(std::string color, std::string text) // resets variable, recieves the text, then changes the colour of the corrisponding text
{
    std::cout << color << text << RESET << std::endl;
}
