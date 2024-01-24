////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 8: "Enhanced Multiplication Table".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Modification of the Problem 7 (Multiplication Table), where a user can
/// repeat a solution multiple times (with using the “do..while” loop).
///
////////////////////////////////////////////////////////////////////////////////


#include <iostream>

int main()
{
    std::string flag;

    do{

        int n;
        int m;

        std::cout << "Please enter two number in next format 1 <= (m, n) <= 8"<< std::endl <<"Please enter first number 'n': ";
        std::cin >> n;
        std::cout << std::endl <<  "Please enter second number 'm': ";
        std::cin >> m;
        std::cout << std::endl;

        for (int i = n; i <= m; i++){
            for (int j = n; j<=m; j++){

                if(i == n){
                    std::cout << j << '\t';
                }
                else if(j == n){
                    std::cout << i << '\t';
                }
                else{
                    std::cout << j*i << '\t';
                }
            }
            std::cout << std::endl;
        }

        std::cout << "Would you like to repeat proces? Type(Yes/No): ";
        std::cin >> flag;
        std::cout << std::endl;

    }
    while(flag != "No");
    // TODO: input your code here
    return 0;
}