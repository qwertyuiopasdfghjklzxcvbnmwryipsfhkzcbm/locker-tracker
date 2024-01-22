#include <iostream>
#include <string>
#include "assets.cpp"

void PrintColor(std::string color, std::string text) // takes the string text and changes the colour
{
    std::cout << color << text << RESET << std::endl; // resets the strings colour, then recieves the text and finaly changes the colour.
}
