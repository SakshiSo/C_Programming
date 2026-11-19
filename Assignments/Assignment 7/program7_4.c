/*
    4. Write a program which accepts N from user and print all odd numbers upto N.

    Input: 18
    Output: 1   3   5   7   9   11  13  15  17
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   OddDisplay
//  Input           :   Integer
//  Output          :   Odd numbers
//  Description     :   Print all odd number for user entered number
//  Date            :   19/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        printf("%d\t", iCnt);
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

    OddDisplay(iValue);

    return 0;
}