#include <iostream>

class New_NPC
{

    private :
    std::string NPC_Name;
    bool NPC_Gender;
    int  * NPC_Age{nullptr};

    public :
    New_NPC() = default;
    
    // Constructor
    New_NPC(std::string_view Name, bool Gender, int Age);

    // Destructor
    ~New_NPC(); // IT IS Not possible to pass parameters to destructor.

    // This Pointer Solution : Conflicting Name of Variables;
    New_NPC* set_new_name(const std::string& NPC_Name)
    {
        // NPC_Name = NPC_Name; << confusing. and sometimes doesnt even compile this.
        this-> NPC_Name = NPC_Name;
        return this; // to able to use chained calls
        // this -> Class_Mem_Variable = Param;
    }

    void Chained_Call()
    {
        std::cout << "Address of This Object : [" << this << "], Name : " << NPC_Name << ", Gender :  " << NPC_Gender << ", Age : " << *NPC_Age << std::endl;
    }

};

New_NPC::New_NPC(std::string_view Name, bool Gender, int Age)
{
    NPC_Name = Name;
    NPC_Gender = Gender;
    NPC_Age = new int; // allocate memory at heap 
    *NPC_Age = Age;
    std::cout << "NPC Constructor Called" << std::endl;
    // returning address of Object by using This Pointer
    std::cout << "New NPC Name : " << NPC_Name << "Constructed at " << this << std::endl;
}

New_NPC::~New_NPC()
{
    delete NPC_Age;
    std::cout << "NPC Destructor Called" << std::endl;
}


void another_npc()
{
    New_NPC X1aro("X1aro_user", true, 17);
    std::cout << "x1aro created" << std::endl;
}

void Point_Function()
{
    New_NPC* Man = new New_NPC("Guy", true, 25); // This doesnt call destructor.

    // delete Man; // causes destructor to be called.
}

int main()
{

    // Method 1 : Most Basic one. Calls Destructor before Main() ends almost
    New_NPC Republic_March("Republic_March_User", false, 18);
    Republic_March.Chained_Call();

    Republic_March.set_new_name("Real_Republic_March");
    Republic_March.Chained_Call();

    // Method 2 : Call Destructor before Main() ends, earlier than Method 1
    another_npc();

    // Method 3 : this doesnt call Destructor, so you have to mantually put Delete keyword into function to manage to delete
    Point_Function(); 

    std::cout << "Main() ended here" << std::endl;
    // Destrcutor called when  main() func almost ended.
    // this is maninly for checking Debugs
    return 0;
}