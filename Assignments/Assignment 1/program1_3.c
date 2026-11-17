/*
    3.Program to rint 5 to 1 numbers on screen
*/

#include<stdio.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   - 
//  Output          :   Print 5 to 1 numbers
//  Description     :   Prints 5 to 1 numbers
//  Date            :   12/11/2026
//  Author          :   Sakshi Avinash Sonavane
//
///////////////////////////////////////////////////

void Display()
{
    int i = 0;
    i = 5;
    while(i >= 1)
    {
        printf("%d", i);
        i--;
    }
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    Display();

    return 0;
}