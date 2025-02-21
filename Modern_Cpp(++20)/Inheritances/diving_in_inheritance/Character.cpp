#include "Character.h"

Generate_Player::Generate_Player()
{

}

Generate_Player::Generate_Player(std::string& Family_Name_Param, std::string&)
     : Family_Name(Family_Name_Param), Given_Name(Given_Name)
{

}

std::ostream& operator<<(std::ostream& out, const Generate_Player& Player)
{
    out <<  "Player : " << Player.Family_Name << " - " << Player.Given_Name << std::endl;
    return out;
}

Generate_Player::~Generate_Player()
{

}