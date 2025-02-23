#include <iostream>
#include "player.h"

// Inheritance Workflow 


int main(){

    Player Republic_March("Basketball"); // Class from player.h
    Republic_March.set_first_name("Bruh"); // Member Function from person.h
    Republic_March.set_last_name("Test"); // Member Function from person.h
    std::cout << "player Name : " << Republic_March << std::endl;
   
    return 0;
}