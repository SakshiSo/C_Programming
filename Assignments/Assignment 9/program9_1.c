/*
    1. Write a program which accepts number from user and display below pattern.

    Input: 5
    Output: *   *   *   *   *   #   #   #   #   #

    Input: 6
    Output: *   *   *   *   *   *   #   #   #   #   #   #


    Input: -5
    Output: *   *   *   *   *   #   #   #   #   #

    Input: 2
    Output: *   *   #   #
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   Display
//  Input           :   Integer
//  Output          :   Display pattern
//  Description     :   accept number fron user and accept number of * and #
//  Date            :   20/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("*\t");     
    }
    
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("#\t");    
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

    Display(iValue);

    return 0;
}