#include <iostream>
#include <string>
#include <unordered_map>
#include <functional>
#include "colorText.hpp"
#include "utilityFunctions.hpp"
#include "handlers.cpp"
#include "assets.hpp"

int main()
{
    command_list = {{"help", "Displays all of the commands", "help", help}, {"list", "Lists all the lockers which follow the inputted parameters as shown below", "list --range=(int-int) --floor=(int) --hallway=(string)", list}, {"info", "Lists all the info on the locker owner, requires user to input locker number", "info (int)", info}, {"clear", "Clears the console", "clear", clear}};
    while (true)
    {
        std::string command_line;
        std::cout << "> ";
        std::getline(std::cin, command_line);
        if (command_line == "exit")
            return 0;
        bool found = false;
        FunctionType selected_function;
        for (const Command command : command_list)
        {
            if (command.name == command_line.substr(0, command.name.length()))
            {
                found = true;
                selected_function = command.ActionCall;
                break;
            }
        }
        if (!found)
        {
            PrintColor(RED, "Command Not Found");
        }
        else
        {
            selected_function(command_line);
        }
    }
}