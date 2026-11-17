/*
    5. Accept one number from user and print that number of * on screen.
*/

#include<stdio.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Accept
//  Input           :   -
//  Output          :   Prints the specified number of asterisks
//  Description     :   Prints the specified number of asterisks
//  Date            :   12/11/2026
//  Author          :   Sakshi Avinash Sonavane
//
///////////////////////////////////////////////////


void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}