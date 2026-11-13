/*
    2. Write a program which accept number from user and print even factors of that number.
    Input: 24
    Output: 2 4 6 8 12 24
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   DisplayFactors 
//  Input           :   Integer
//  Output          :   Print even factors
//  Description     :   Print even factors of given number on screen.
//  Date            :   13/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo/2; i++)
    {
        if(iNo % i == 0)
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

    DisplayFactor(iValue);

    return 0;
}