////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 7: "Multiplication Table".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Program asks a user for two numbers, 1 <= (m, n) <= 8 and prints a rectangle
/// multiplication table aligning output at tab positions.
///
////////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main()
{

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
    // TODO: input your code here
    return 0;
}
