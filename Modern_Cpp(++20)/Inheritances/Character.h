#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <cstring>

class Generate_Player
{
    friend std::ostream& operator<<(std::ostream& out, const Generate_Player& Player);

    

 public :
   Generate_Player() = default;
   Generate_Player(std::string& Family_Name_Param, std::string& Given_Name_Param);
   ~Generate_Player();

   std::string Family_Name{"Null"};
   std::string Given_Name{"Null"};

   std::string Get_Family_Name() const
   {
     return Family_Name;
   }

   std::string Get_Given_Name() const
   {
     return Given_Name;
   }

};

#endif