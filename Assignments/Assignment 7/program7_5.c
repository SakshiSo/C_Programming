/*
    5. Write a program which accepts N and print first 5 multiple of N.

    Input: 4
    Output: 4   8   12  16  20
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   MultipleDisplay
//  Input           :   Integer
//  Output          :   Display first 5 multiple of N
//  Description     :   Accept N from user and display 5 multiple of N
//  Date            :   19/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt ++)
    {
        printf("%d\t", iCnt * iNo);
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

    MultipleDisplay(iValue);

    return 0;
}