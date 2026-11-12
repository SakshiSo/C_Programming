/*
    4. Accept one number and check whether it is divisible by 5 or not
*/

#include<stdio.h>

///////////////////////////////////////////////////
//
//  Function Name   :   CheckDivisibility
//  Input           :   Integer
//  Output          :   Checks if a number is divisible by 5
//  Description     :   Checks if a number is divisible by 5
//  Date            :   12/11/2026
//  Author          :   Sakshi Avinash Sonavane
//
///////////////////////////////////////////////////

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
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
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisibile by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}