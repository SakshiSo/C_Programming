/*
    2. Write a program which accept rnumber from user and return the count of odd digits.

    Input: 2335
    Output: 3

    Input: 1018
    Output: 2

    Input:  -1018
    Output: 2

    Input: 8462
    Output: 0
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   CountOdd
//  Input           :   Integer
//  Output          :   number of Odd digits
//  Description     :   Accept number from user and check number of odd digits
//  Date            :   25/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

int CountOdd(int iNo)
{
    int iCnt = 0, iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 != 0)
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

    iRet = CountOdd(iValue);

    printf("%d", iRet);

    return 0;
}