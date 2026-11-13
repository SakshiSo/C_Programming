/*
    3. Write a program which accept number from user and print even factors of that number.
    Input: 36
    Output: 2 6 12 18 36
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   DisplayEvenFactor
//  Input           :   Integer
//  Output          :   Print even factors
//  Description     :   Print even factors of given number on screen.
//  Date            :   13/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        if(iNo % i == 0 && i % 2 == 0)
        {
            printf("%d ", i);
        }
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

    DisplayEvenFactor(iValue);

    return 0;
}