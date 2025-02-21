#include "Character.h"
#include "identification.h"

Generate_Player::Generate_Player(std::string_view& Game_Parameter)
: game_username(Game_Parameter)

{
}

std::ostream& operator<<(std::ostream& out, const Generate_Player& player)
{
    out << "Player : { game : " << player.game_username
    << "Names : " << player.Get_Family_Name()
    << " - " << player.Get_Given_Name() << " } " << std::endl;

    return out;
}