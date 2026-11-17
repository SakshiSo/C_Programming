/*
    4.Accept two numbers from user and display first number in second number of times.
*/

#include<stdio.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   Integer, Integer
//  Output          :   First number in second number of times
//  Description     :   Displays first number in second number of times
//  Date            :   12/11/2026
//  Author          :   Sakshi Avinash Sonavane
//
///////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    //Write Updater
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d ", iNo);
    }
}

///////////////////////////////////////////////////
//  Entry point of the application
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}