#include <iostream>
#include <concepts> // to use concept keyword

// requires Syntax
template <typename Template_Concept_Test>
requires std::integral<Template_Concept_Test> // only accepting integerals on this concept.
Template_Concept_Test Addition (Template_Concept_Test a, Template_Concept_Test b)
{
    return {a+b};
}

// Simple Requirement
template <typename Additional_Trait_Template>
concept AdditionalType = requires (Additional_Trait_Template a)
{
    sizeof(a) <=4; // simple requirement
    requires sizeof(a) <= 4; // Nested Requirement
};

// Logic Combine of concept
template <typename Template_Combine_Test>
requires std::integral<Template_Combine_Test> || std::floating_point<Template_Combine_Test>
Template_Combine_Test Addition_Two (Template_Combine_Test a, Template_Combine_Test b)
{
    return a + b;
}

// constrains the auto parameter. - but is it really useful? doubt.
std::integral auto addition_auto_concept (std::integral auto a, std::integral auto b)
{
    return a + b;
}

int main ()
{
    int a {30};
    int b {20};
    std::cout << Addition(a,b) << std::endl;

    double c {2.14};
    double d {3.14};
    // std::cout << Addition(c,d) << std::endl; compile error. integrals only.

    float a_f {30.231};
    float b_f {20.749};
    std::cout << Addition_Two(a_f, b_f) << std::endl;

    std::integral auto Test_concept_var = addition_auto_concept(10, 5);
    std::cout << Test_concept_var << std::endl;



    return 0;
}