#include <iostream>
#include <cstring>

template <typename Template_Test>
Template_Test Maximum_Template (Template_Test a, Template_Test b)
{
    return {(a > b ? a : b)};
}

int Maximum_Function(int a, int b)
{
    return {(a > b ? a : b)};
}

/** 
// function overload fail. cannot convert string to int.
int Maximum_Function(std::string S_One, std::string S_Two) 
{
    return {(S_One > S_Two ? S_One : S_Two)};
}
**/

// Templates parameters passing with References.
// Why use referneces? - C++ copies object when passing arguements. 
// reference passes object that is originally decleard variable.

template <typename Template_With_Referenes>
Template_With_Referenes& Template_Function_With_References(Template_With_Referenes& a, Template_With_Referenes& b)
{
    return {(a > b ? a : b)};
}

template <typename Template_Specialization_For_Characters>
Template_Specialization_For_Characters Template_Specialization_Test (Template_Specialization_For_Characters a, Template_Specialization_For_Characters b)
{
    return {(a > b ? a : b)};
} 

// Template specialization
template <>
const char * Template_Specialization_Test <const char*> (const char* a, const char* b)

{
    return ( std::strcmp(a,b) > 0) ? a : b;
}

int main()
{
    int Int_Val {30};
    int Int_Val_Two {50};
    std::cout << "compile test" << std::endl;

    std::cout << "Maximum_Template with integer : " << Maximum_Template(6,5) << std::endl;
    std::cout << "Maximum_Template with array : " << Maximum_Template("Hello world", "Bye World") << std::endl;
    std::cout << "Maximum_Function with integer :" << Maximum_Function(6,5) << std::endl;
    // std::cout << "Maximum_Function with array : " << Maximum_Function_Auto("Hello world", "Bye world") << std::endl;
    std::cout << "Maximum_Template_with_references with integer : " << Template_Function_With_References(Int_Val, Int_Val_Two) << std::endl;

    const char* g {"HI"};
    const char* b {"BYE"};
    std::cout << Template_Specialization_Test(g, b) << std::endl;
    
    return 0;
}

#include <iostream>
#include <cstring>

template <typename Template_Test>
Template_Test Maximum_Template (Template_Test a, Template_Test b)
{
    return {(a > b ? a : b)};
}

int Maximum_Function(int a, int b)
{
    return {(a > b ? a : b)};
}

/** 
// function overload fail. cannot convert string to int.
int Maximum_Function(std::string S_One, std::string S_Two) 
{
    return {(S_One > S_Two ? S_One : S_Two)};
}
**/

// Templates parameters passing with References.
// Why use referneces? - C++ copies object when passing arguements. 
// reference passes object that is originally decleard variable.

template <typename Template_With_Referenes>
Template_With_Referenes& Template_Function_With_References(Template_With_Referenes& a, Template_With_Referenes& b)
{
    return {(a > b ? a : b)};
}

template <typename Template_Specialization_For_Characters>
Template_Specialization_For_Characters Template_Specialization_Test (Template_Specialization_For_Characters a, Template_Specialization_For_Characters b)
{
    return {(a > b ? a : b)};
} 

// Template specialization
template <>
const char * Template_Specialization_Test <const char*> (const char* a, const char* b)

{
    return ( std::strcmp(a,b) > 0) ? a : b;
}

int main()
{
    int Int_Val {30};
    int Int_Val_Two {50};
    std::cout << "compile test" << std::endl;

    std::cout << "Maximum_Template with integer : " << Maximum_Template(6,5) << std::endl;
    std::cout << "Maximum_Template with array : " << Maximum_Template("Hello world", "Bye World") << std::endl;
    std::cout << "Maximum_Function with integer :" << Maximum_Function(6,5) << std::endl;
    // std::cout << "Maximum_Function with array : " << Maximum_Function_Auto("Hello world", "Bye world") << std::endl;
    std::cout << "Maximum_Template_with_references with integer : " << Template_Function_With_References(Int_Val, Int_Val_Two) << std::endl;

    const char* g {"HI"};
    const char* b {"BYE"};
    std::cout << Template_Specialization_Test(g, b) << std::endl;
    
    return 0;
}
