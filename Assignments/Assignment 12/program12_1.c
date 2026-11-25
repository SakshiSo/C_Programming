/*
    1. Write a program which accept number from user and display its digit
    in reverse order.

    Input: 2395
    Output: 5
            9
            3
            2

    Input: 1018
    Output: 8
            1
            0
            1

    Input: -1018
    Output: 8
            1
            0
            1

    Input: 9000
    Output: 0
            0
            0
            9
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   DisplayDigit
//  Input           :   Integer
//  Output          :   Digits in Reverse order
//  Description     :   Accept number display it in reverse order 
//  Date            :   24/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
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

    DisplayDigit(iValue);

    return 0;
}