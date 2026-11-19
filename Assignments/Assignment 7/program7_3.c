/*
    3. Write a program which accept number from user and print its numbers line.

    Input: 4
    Output: -4  -3  -2  -1  0   1   2   3   4
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   Display
//  Input           :   Integer
//  Output          :   Number line
//  Description     :   Print number line for user entered number
//  Date            :   19/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
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