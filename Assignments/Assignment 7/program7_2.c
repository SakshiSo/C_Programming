/*
    2. Write a program which accept number from user and print numbers 
    till that number.

    Input: 8
    Output: 1   2   3   4   5   6   7   8
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   Display
//  Input           :   Integer
//  Output          :   Numbers
//  Description     :   Print numbers series till user entered number
//  Date            :   19/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        printf("Invalid Input");
        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
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

    Display(iValue);

    return 0;
}