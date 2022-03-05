// WackyAdventuresofStevieAndTheBoys.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../UI/UI.h"
#include "../Abilities/Abilities.h"
#include "../AI/AI.h"
#include "../Controls/Controls.h"
#include "../DevUtils/DevUtils.h"
#include <boost/algorithm/string/trim.hpp>
#include <boost/locale.hpp>
#include <boost/algorithm/string/case_conv.hpp>


int main()
{
    boost::locale::generator gen;

    gen.add_messages_path(".");
    gen.add_messages_domain("messages");

    // Generate locales and imbue them to iostream
    //std::locale::global(gen("de_DE.UTF-8"));
    std::locale::global(gen(""));
    std::cout.imbue(std::locale());

    std::string input;
    bool continueGame = true;

    while (continueGame) {
        std::cout << "Choose an action:\n1.Show Minimap\n2.Show Inventory\n3.Enable Double Jump\n4.Spawn an AI Enemy\n5.Jump\n6.Nuke the Map\n7.End Game\n";
        std::cin >> input;
        boost::trim(input);

        if (input.compare("1") == 0) {
            Show_Minimap();
            std::cout << "\n";
        }
        else if (input.compare("2") == 0) {
            Show_Inventory();
            std::cout << "\n";
        }
        else if (input.compare("3") == 0) {
            Enable_DoubleJump();
            std::cout << "\n";
        }
        else if (input.compare("4") == 0) {
            AI_Spawn(1, 1, 1);
            std::cout << "\n";
        }
        else if (input.compare("5") == 0) {
            Jump_Input();
            std::cout << "\n";
        }
        else if (input.compare("6") == 0) {
            NukeMap();
            std::cout << "\n";
        }
        else if (input.compare("7") == 0) {
           continueGame = false;
        }
        else{
            std::cout << "Invalid Input\n";
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
