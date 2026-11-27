/*
    4. Write a program which accept number from user and return summation of all its 
    non factors.

    Input: 12
    Output: 50

    Input: 10
    Output: 37
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   SumNonFact
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Accept number and display sum of non factors
//  Date            :   27/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
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

    iRet = SumNonFact(iValue);

    printf("%d", iRet);

    return 0;
}