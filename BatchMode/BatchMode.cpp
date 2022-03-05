#include <iostream>
#include "../UI/UI.h"
#include "../Abilities/Abilities.h"
#include "../AI/AI.h"
#include "../Controls/Controls.h"
#include "../DevUtils/DevUtils.h"
#include "../Core/Core.h"
#include "../Application/Application.cpp"
//#include <boost/algorithm/string/trim.hpp>

int main()
{

    std::cout << "Game being run in Batch Mode\n";

    //Core lib

    Build_Map();
    Load_Inventory();
    Init_Engine();

    //Dev Utils

    GodMode();

    //Controls

    Jump_Input();

    //AI

    AI_Spawn(1,2,3);

    //Application

    Turn_Character(1);

    //Abilities

    Magic_Light();

    std::cout << "Game Exit\n";

}