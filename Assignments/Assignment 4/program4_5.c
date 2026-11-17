/*
    5. Check Divisibility by 5.

    Problem statement: accept an integer and determine whether it is divisible
    by 5 without leaving any remainder.

    Expected Output:
    Input: 45 --> Divisible by 5
    Input: 23 --> Not Divisible by 5
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//  Function Name   :   CheckDivisibility
//  Input           :   Integer
//  Description     :   Checks the integer whether 
//                      divisible by 5 or not
//  Date            :   17/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

void CheckDivisibility(int iValue)
{
    if(iValue % 5 == 0)
    {
        printf("Divisible by 5.");
    }
    else
    {
        printf("Not Divisible by 5.");
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

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}