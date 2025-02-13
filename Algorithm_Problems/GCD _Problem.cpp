// Problem : Define Great Divisior Euclidean algorithm

#include <iostream>
#include <stdio.h>
#include <algorithm>

int GCD_Algorithm_EucDef(int a, int b) // O(1) 
{
    if (b == 0)
    {
        return a;
    } 
    return GCD_Algorithm_EucDef(b, a % b);
}

int GCD_Algorithm_Loop(int a, int b) // O(N log n) INTUITIVE 
{
    while (b != 0)
    {
        int n {a % b};
        a = b;
        b = n;
    }
}

int GCD_Algorithm_Brute_Force(int a, int b) // O(N) Slow but Definition of GCD is entered
{
    int minimum = (a < b) ? a : b; // if b is bigger than a, return a / if b is smalle than a, return b 
    int End_The_Loop = 1;
    for (int iterator = 2; iterator <= minimum; iterator++) // A ⊕ n
    {
        if (a % iterator == 0 && b % iterator == 0) 
        {
            End_The_Loop = iterator;
        }
    }
    return End_The_Loop;
}

void EucDef()
{
    int x1 {};
    int x2 {};
    // SOL1. leveraging the definition of GCD
    std::cout << "GCD Algorithm Sol" << std::endl;
    std::cout << "GCD(X1,X2)";
    std::cout << "Type the X1 : ";
    std::cin >> x1;
    std::cout << "GCD (" << x1 << ",X2)" << std::endl;
    std::cout << "Type the X2 : ";
    std::cin >> x2;
    std::cout << "GCD (" << x1 << "," << x2 << ")" << std::endl;
    
    std::cout << "GCD (" << x1 << "," << x2 << ") = " << GCD_Algorithm_EucDef(x1, x2) << std::endl;
}

void EucLoop()
{
    int x1 {};
    int x2 {};
    // SOL2. Use Loop statements 
    std::cout << "GCD Algorithm Sol" << std::endl;
    std::cout << "GCD(X1,X2)";
    std::cout << "Type the X1 : ";
    std::cin >> x1;
    std::cout << "GCD (" << x1 << ",X2)" << std::endl;
    std::cout << "Type the X2 : ";
    std::cin >> x2;
    std::cout << "GCD (" << x1 << "," << x2 << ")" << std::endl;
    
    std::cout << "GCD (" << x1 << "," << x2 << ") = " << GCD_Algorithm_Loop(x1, x2) << std::endl;
}

void EucBrt()
{
    int x1 {};
    int x2 {};
    // SOL3. Brute Force 
    std::cout << "GCD Algorithm Sol" << std::endl;
    std::cout << "GCD(X1,X2)";
    std::cout << "Type the X1 : ";
    std::cin >> x1;
    std::cout << "GCD (" << x1 << ",X2)" << std::endl;
    std::cout << "Type the X2 : ";
    std::cin >> x2;
    std::cout << "GCD (" << x1 << "," << x2 << ")" << std::endl;
    
    std::cout << "GCD (" << x1 << "," << x2 << ") = " << GCD_Algorithm_Brute_Force(x1, x2) << std::endl;
}

int main()
{
    std::string Answer{};

    std::cout << "Euclidean ways of getting GCD " << std::endl;
    std::cout << "EucDef / EucLoop / EucBrt" << std::endl;

    std::cin >> Answer;

    if (Answer == "EucDef")
    {
        EucDef();
    }
    else if(Answer == "EucLoop")
    {
        EucLoop();
    }
    else if(Answer == "EucBrt")
    {
        EucBrt();
    }
    else
    {
        std::cout << "seems like you had typo :c " << std::endl;
    }

    return 0;
}