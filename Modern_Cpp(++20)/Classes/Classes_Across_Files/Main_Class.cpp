#include <iostream>
#include <cstring>
#include "Server_Host_Management.cpp"
#include "FPS_Framework_Data.cpp"

class Generate_Player
{
    private :

    int Health {100};
    int Walkspeed {16};
    std::string Username {"Player1"};
    int Money {500};
    int User_Key {10001};
    std::string Owned_Weapons[4] = {"M4A1", "AK12", "Glock21", "MP443"};

    public :

    Generate_Player() = default;

    Generate_Player(int User_key_Param, std::string Username_Param)
    {
        User_Key = User_key_Param;
        Username = Username_Param;
    }

    std::string Get_Username()
    {
        return Username;
    }

};

int main()
{
    // whats difference between heap and stack?
    // in C++, stack object automatically allocates by compiler,
    // whereas heap is totally controlled by programmer. hence more flexible.


    // Create Stack Object "." notation.
    Generate_Player Republic_March(233234, "Republic_March_User");
    std::cout << Republic_March.Get_Username() << " Has Joined the server." << std::endl;
    std::cout << "Session ID : "<< Server_ID << std::endl;

    // Managing a stack object through pointer.
    Generate_Player* p_Republic_March = &Republic_March;
    FPS_Framework();

    // Heap object
    // " -> " is "this Pointer" which is like pointing directly to heap object.
    Generate_Player* x1aro = new Generate_Player(10003, "x1aro_user");
    std::cout << "x1aro username : " << x1aro->Get_Username() << std::endl;

    delete x1aro; // Release memory from heap.
    delete &Republic_March; // can even manage memory from stack object with pointer.

    

    return 0;
}