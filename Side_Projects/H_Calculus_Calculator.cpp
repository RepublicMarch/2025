#include <iostream>
#include <string>
#include <utility> 


struct Polynominal_Function
{
    Polynominal_Function();
    std::pair<std::string, std::string> Polynominal_Function_Limit_Fraction(std::string F_x, std::string G_x, int lim_x)
    {

        char replacement = static_cast<char>(lim_x); // Convert int to char

        std::string Answer_Limit;
        std::string Result_F_x = F_x;
        std::string Result_G_x = G_x;
        std::cout << "Is it indeterminate form? " << std::endl;
        std::cout << "Yes / No" << std::endl;
        std::cin >> Answer_Limit;

        if (Answer_Limit == "Yes")
        {
            for (char Iterator : Result_F_x)
            {
                if (Iterator == 'x')
                {
                    Iterator = replacement;
                } 
            }

            for (char Iterator : Result_G_x)
            {
                if (Iterator == 'x')
                {
                    Iterator = replacement;
                } 
            }

            std::cout << Result_F_x << " / " << Result_G_x << std::endl;

        }
        else if (Answer_Limit == "No")
        {

        }
        else
        {
            std::cout << "it seems like you had a typo." << std::endl; 
        }
    };
    
    void Polynominal_Function_Limit(std::string F_x)
    {
        std::string Answer_Limit;
        std::cout << "Is it continuous? " << std::endl;
        std::cout << "Yes / No" << std::endl;
        std::cin >> Answer_Limit;

        if (Answer_Limit == "Yes")
        {

        }
    };
    
};

Polynominal_Function::Polynominal_Function() {
}


struct Transcendental_Function
{

};


int main()
{
    bool Program_Running = true;
    std::string Answer = "";

    while (Program_Running == true)
    {
        std::cout << "Hi, Welcome Calculus Caculator Program." << std::endl;
        std::cout << "------------------------------------------------------" << std::endl;
        std::cout << "Limit_PF - Limit of Polynomial Function " << std::endl;
        std::cout << "Limit_SQ - Limit of Sequence " << std::endl;
        std::cout << "Derivate_PF - Derivatives of Polynominal Functions " << std::endl;
        std::cout << "Derivate_TF - Derivatives of Transcendental Functions" << std::endl;
        std::cout << "Integral_PF - Integrating Polynomial Functions " << std::endl;
        std::cout << "Integral_TS - Integrating Transcendental Functions " << std::endl;
        std::cout << "Quit - Quit the Program " << std::endl;
        std::cout << "------------------------------------------------------" << std::endl;
        std::cin >> Answer;

        if (Answer == "Limit_PF")
        {
            std::string Answer_Two;
            std::cout << "Is it Fraction?" << std::endl;
            std::cout << "Yes / No" << std::endl;
            std::cin >> Answer_Two;
            if (Answer_Two == "Yes")
            {
                std::string F_x = "";
                std::string G_x = "";
                int lim_x {0};
                std::cout << "H(x) = f(x) / g(x)" << std::endl;
                std::cout << "Type f(x) : " << std::endl;
                std::cin >> F_x;
                std::cout << "Type g(x) : " << std::endl;
                std::cin >> G_x;
                std::cout << "where the x approaching to?" << std::endl;
                std::cin >> lim_x;
                Polynominal_Function H_x;
                auto Resulting = H_x.Polynominal_Function_Limit_Fraction(F_x, G_x, lim_x);

            }
            else if (Answer_Two == "No")
            {
                std::string Function = "";
            }
            else
            {
                std::cout << "it seems like you had typo" << std::endl;
            }
        }
        else if(Answer == "Limit_SQ")
        {

        }
        else if(Answer == "Derivate_PF")
        {

        }
        else if(Answer == "Derivate_TF")
        {

        }
        else if(Answer == "Integral_PF")
        {

        }
        else if(Answer == "Integral_TF")
        {

        }
        else if(Answer == "Quit")
        {
            std::cout << "Thanks for running the program!" << std::endl;
            Program_Running = false;
        }
        else
        {
            std::cout << "Sorry, it seems like you had typo." << std::endl;
        }

    };
    

    return 0;
}