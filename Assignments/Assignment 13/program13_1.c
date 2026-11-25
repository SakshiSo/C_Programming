/*
    1. Write a program which accept number from user and return the count of even digits.

    Input: 2395
    Output: 1

    Input: 1018
    Output: 2

    Input: -1018
    Output: 2

    Input: 8462
    Output: 4
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   CountEven
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Accept number display count of even digits
//  Date            :   25/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iCnt = 0, iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
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

    iRet = CountEven(iValue);

    printf("%d", iRet);

    return 0;
}