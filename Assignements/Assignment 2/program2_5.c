/*
    5. Accept number from user and check whether number is even or odd.
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////
//
//  Function Name   :   BOOL ChkEven
//  Input           :   Integer
//  Output          :   BOOL
//  Description     :   Checks if a number is even or odd
//  Date            :   12/11/2026
//  Author          :   Sakshi Avinash Sonavane
//
///////////////////////////////////////////////////

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    //Logic
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////
//  Entry point of the application
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    //Diaplay result
    if(bRet == TRUE)
    {
        printf("%d is even number", iValue);
    }
    else
    {
        printf("%d is odd number", iValue);
    }
}