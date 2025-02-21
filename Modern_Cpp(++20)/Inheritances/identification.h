#ifndef IDENTIFICATION.H
#define IDENTIFICATION.H

#include <string>
#include <iostream>
#include <string_view>
#include "Character.h"

class New_user : public Generate_Player
{
    friend std::ostream& operator<<(std::ostream& out, const Generate_Player& player);

    public :
    New_user() = default;
    New_user(std::string_view& Game_Parameter);
    ~New_user();

    std::string game_username{"Null"};
};


#endif