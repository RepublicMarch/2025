#include <iostream>
#include "headertest.cpp"

template <typename Cylinder_Template> // dont care about this. i wanted to some experiment.
Cylinder_Template Volume_Template(Cylinder_Template PI_T, Cylinder_Template Base_Radius_T, Cylinder_Template Height_T)
{
    return{(PI_T * Base_Radius_T * Base_Radius_T * Height_T)};
}


class Cylinder_Class {

    // members cant be referneces btw
    public :
    double base_radius_C {1.0};
    double height_C {1.0};
    double PI_C {3.14};

    public :
    double volume()
    {
        return {(PI_C * base_radius_C * base_radius_C * height_C)};
    }

    private :
    double SECRET_NUMBER {2.17281828};
};

class Consturctor
{
    private :
    int x_one {0};
    int x_two {0};

    public :
    /*Consturctor()
    {
        x_two = 20;
        x_one = 15;
    }; */


    Consturctor() = default;
    // this basically makes x_one, x_two to both zero. which is not modified.

    Consturctor(int x_one_param, int x_two_param) // function overload
    {
        x_one = x_one_param;
        x_two = x_two_param;

    }

    int Delta_X()
    {
        return{(x_two - x_one)};
    }

};

class Your_Information_Class
{
    private :
    int Home_address {217281728};
    int Bank_Account {0};
    int Wallet {5};
    int Password {2103};
    int Debt {50000};


    public :

    // Constructor

    Your_Information_Class() = default;

    // Getters 

    int get_home_address()
    {
        return Home_address;
    }

    int get_password()
    {
        return Password;
    }

    int get_bankaccount()
    {
        return Bank_Account;
    }

    // Setters
    void set_password(int new_password)
    {
        Password = new_password;
    }

    void loan(int how_many)
    {
        Bank_Account = how_many;
        Debt += how_many;
    }

    void deposit(int how_many)
    {
        if(Wallet > how_many)
        {
            Bank_Account = how_many;
            Wallet =- how_many;
        }
        else
        {
            std::cout << "u poor";
        }
    }

    void withdrawl(int how_many)
    {
        if(how_many > Bank_Account)
        {
            Wallet = how_many;
            Bank_Account =- how_many;
        }
    }
};

int main()
{
    Cylinder_Class Cylinder1; // Generate a object using class
    std::cout << "Volume of Cylinder1 : " << Cylinder1.volume() << std::endl;

    Cylinder1.base_radius_C = 3.0;
    Cylinder1.height_C = 2;

    std::cout << "Volume of Cylinder 1 after assign var : " << Cylinder1.volume() << std::endl;

    Cylinder_Class Cylinder2; // another object
    std::cout << "Volume of Cylinder 2 : " << Cylinder2.volume() << std::endl;

    double Base_Rad_TE {1.0};
    double PI_TE {3.14};
    double Height_TE {1.0};

    std::cout << "Cylinder using Template : " << Volume_Template(PI_TE, Base_Rad_TE, Height_TE) << std::endl;

    // you cannot access private data :
    // std::cout << "Printing Private Class Variable : " << Cylinder2.SECRET_NUMBER << std::endl;

    Consturctor F_x;
    std::cout << "F_x Delta x : " << F_x.Delta_X() << std::endl;

    Consturctor F_g(50,25);
    std::cout << "F_g Delta x : " << F_g.Delta_X() << std::endl;

    Your_Information_Class Republic_March;
    std::cout << "Republic_March Current Bank account status : " << Republic_March.get_bankaccount() << " dollars" << std::endl;
    Republic_March.loan(30);
    std::cout << "Republic_March Current bank account status after loan : " << Republic_March.get_bankaccount() << " dollars" << std::endl;
    
    std::cout << "Headerfile test : " << Natural_Logarithm << std::endl;
    
    
    return 0;
}