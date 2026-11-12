/*
    2.Accept one number from user and print that number of * on screen.
*/

#include<stdio.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   Integer
//  Output          :   Prints asterisks
//  Description     :   Pattern
//  Date            :   12/11/2026
//  Author          :   Sakshi Avinash Sonavane
//
///////////////////////////////////////////////////

void Display(int iNo)
{
    //Write Updater
    while(iNo > 0)
    {
        printf("* ");
        iNo --;
    }
}

///////////////////////////////////////////////////
//  Entry point of the application
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}