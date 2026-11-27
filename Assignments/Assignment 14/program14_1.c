/*
    1. Write a program which accept number from user and display its multiplication
    of factors

    Input: 12
    Output: 144

    Input: 13
    Output: 1

    Input: 10
    Output: 10
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   MultFact
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Accept number display multipication of factors
//  Date            :   26/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0, iMul = 1;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMul = iMul * iCnt;
        }
    }
    return iMul;
}

///////////////////////////////////////////////////
// Entry point of the application
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d", iRet);

    return 0;
}