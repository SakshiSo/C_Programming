/*
    2. Check Even or Odd number.

    Problem statement: Accept an integer from the user and
    determine whether it is even or odd. an even number is 
    completely divisible by 2.

    Expected Output:
    Input: 24 --> Even number
    Input: 17 --> Odd number
*/

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//  Function Name   :   CheckEvenOdd
//  Input           :   Integer
//  Output          :   It is even or odd
//  Description     :   Checks the integer whether even or odd
//  Date            :   16/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

void CheckEvenOdd(int iValue)
{
    if(iValue % 2 == 0)
    {
        printf("%d is a even number.", iValue);
    }
    else
    {
        printf("%d is a odd number.", iValue);
    }
}

///////////////////////////////////////////////////
// Entry point of the application
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}