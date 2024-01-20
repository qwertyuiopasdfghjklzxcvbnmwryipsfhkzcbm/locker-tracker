#include <iostream>
#include <string>
#include "assets.cpp"

int stringToInt(std::string string)
{
    try
    {
        int myInteger = std::stoi(string);
        return myInteger;
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
        exit(1);
    }
    catch (const std::out_of_range &e)
    {
        std::cerr << "Out of range: " << e.what() << std::endl;
        exit(1);
    }
}

void Error(std::string message, bool exitProgram)
{
    PrintColor(RED, message);
    if (exitProgram)
        exit(1);
}