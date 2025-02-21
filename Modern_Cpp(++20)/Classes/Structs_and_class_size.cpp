#include <iostream>

// Class makes Members private by default,
class Project_One
{
    std::string Name{"nan"};
};

class Generate_NPC
{
    private : 
    std::string Name{"None"};
    int Health {100};
    int Age {20};

    public :
    Generate_NPC(std::string_view New_Name, int New_Health, int New_Age)
    {
        Name = New_Name;
        Health = New_Health;
        Age = New_Age;
    }

    Generate_NPC() = default;

    void Print_Status()
    {
        std::cout << "[ NPC_Name : " << Name << ", Health : " << Health << ", Age : " << Age << " ] " << std::endl;
    }
};

// Struct makes Members public by default.
// struct also faster than classes.
struct Project_Two
{
    std::string Name{"NAN"};
};

struct point
{
    int x {0};
    int y {0};
};

void print_point(const point& point_object)
{
    std::cout << " [ x_val : " << point_object.x << ", y_val : " << point_object.y << " ]" << std::endl; 
};

int main()
{
    Project_One Zombie_Frontline;
    Project_Two Project_Condemned;

    // Zombie_Frontline.Name << Cannot access name. cuz private
    Project_Condemned.Name = "new"; // works because struct in default is public.

    std::cout << Project_Condemned.Name << std::endl; 

    point new_point_graph;
    new_point_graph.x = 10;
    new_point_graph.y = 5;

    print_point(new_point_graph);

    Generate_NPC Republic_March("Republic_March", 100, 19);
    Republic_March.Print_Status();

    std::cout << "size of Republic_March Class : " << sizeof(Republic_March) << std::endl;

    // Experiemnt
    std::cout << "Size of an Object by Class : " << sizeof(Zombie_Frontline) << std::endl;
    std::cout << "Size of an Object by Struct : " << sizeof(Project_Condemned) << std::endl;


    return 0;
}