#ifndef SERVER_HOST_MANAGEMENT.CPP // if HEader file is missing
#define SERVER_HOST_MANAGEMENT.CPP // then include that header file.

#include <iostream>

class FPS_Framework
{
    public :
    FPS_Framework()
    {
        std::cout << "FPS Framework 1.0v Loaded." << std::endl;
        std::cout << "Game_Access ID : " << Game_Access_ID << std::endl;

    }

    void Fire_Gun()
    {
        std::cout << "Fired the gun" << std::endl;
    }

    private :

};

#endif // end the if loop here.