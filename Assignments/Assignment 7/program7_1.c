/*
    1. write a program which accept number from user and print that number of $ & * on screen.

    Input: 5
    Output: $ * $ * $ * $ * $ *

    Input: 3
    Output: $ * $ * $ *

    Input: -3
    Output: $ * $ * $ *
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   Pattern
//  Input           :   Integer
//  Output          :   $ and *
//  Description     :   print pattern of user entered number
//  Date            :   19/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}

///////////////////////////////////////////////////
// Entry point of the application
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}