////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 2: "Length of a C-string (strlen)".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Count the length of a C-style string variable initialized with a string
/// literal (implement strlen() ).
///
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <iostream>


int main()
{
    char s;

    scanf("%c", &s);

    int i = 0;

    while(s != '\n'){
        i++;
        scanf("%c",&s);
    }
    printf("%d", i);
    // TODO: input your code here
    return 0;
}
