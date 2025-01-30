#include <iostream>
#include <sstream>
#include <algorithm>
#include <cstring> // to use std::string

template <typename Template_For_Dynamic_Array>
class Class_Dynamic_Array
{
    Template_For_Dynamic_Array* data; // Template type for dynamic array
    size_t notation_index;

public: // Accessible anywhere

    Class_Dynamic_Array(int notation_index) // Normal "Constructor"
    {
        this->notation_index = notation_index;
        data = new Template_For_Dynamic_Array[notation_index]; // assign dynamic memory through data variable
    }

    Class_Dynamic_Array(const Class_Dynamic_Array<Template_For_Dynamic_Array>& other) // "Copy Constructor"
    {
        notation_index = other.notation_index;
        data = new Template_For_Dynamic_Array[notation_index]; 

        for (size_t Iterator = 0; Iterator < notation_index; Iterator++)
        {
            data[Iterator] = other.data[Iterator]; // Accessing other.data
        }
    }

    // Define [] operator
    Template_For_Dynamic_Array& operator[](int index) // define [] operator
    {
        return data[index];
    }

    const Template_For_Dynamic_Array& operator[](int index) const
    {
        return data[index];
    }

    Template_For_Dynamic_Array& at(int index) // define at() function
    {
        if (index < notation_index)
            return data[index];
        throw std::out_of_range("index out of range"); // Use std::out_of_range
    }

    // Define size() function
    size_t size() const
    {
        return notation_index;
    }

    ~Class_Dynamic_Array() // Destructor
    {
        delete[] data;
    }

    // Define iterator functions
    Template_For_Dynamic_Array* begin() { return data; }
    const Template_For_Dynamic_Array* begin() const { return data; }
    Template_For_Dynamic_Array* end() { return data + notation_index; }
    const Template_For_Dynamic_Array* end() const { return data + notation_index; }

    // Define + operator function
    friend Class_Dynamic_Array<Template_For_Dynamic_Array> operator+(const Class_Dynamic_Array<Template_For_Dynamic_Array>& arr1, const Class_Dynamic_Array<Template_For_Dynamic_Array>& arr2)
    {
        Class_Dynamic_Array<Template_For_Dynamic_Array> result(arr1.size() + arr2.size());
        std::copy(arr1.begin(), arr1.end(), result.begin());
        std::copy(arr2.begin(), arr2.end(), result.begin() + arr1.size());

        return result;
    } 

    // Convert array to string
    std::string to_string(const std::string& sep = ", ")
    {
        if (notation_index == 0)
        {
            return "";
        }

        std::ostringstream os;
        os << data[0];

        for (size_t i = 1; i < notation_index; i++)
        {
            os << sep << data[i];
        }

        return os.str();
    }

    // Define struct to save student's information
    struct student
    {
        std::string name;
        int standard; 
    };

    // Overloading << operator for student struct
    friend std::ostream& operator<<(std::ostream& os, const student& s)
    {
        return (os << "[" << s.name << ", " << s.standard << "]");
    }
};

int main()
{
    int xStudents;
    std::cout << "Enter how many students are in first class: ";
    std::cin >> xStudents;

    Class_Dynamic_Array<Class_Dynamic_Array<student>::student> class1(xStudents); // Template type for student
    return 0;
}
