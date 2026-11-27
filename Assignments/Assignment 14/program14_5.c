/*
    5. Write a program which accept number from user and return difference between 
    summation of all its factors and non factors.

    Input: 12
    Output: -34

    Input: 10
    Output: -29
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   FactDiff
//  Input           :   Integer
//  Output          :   Difference 
//  Description     :   Accept number from user and display difference between factors and non factors
//  Date            :   27/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0, iSumNonFact = 0, iSumFact = 0, iDiff = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0 && iCnt <= iNo / 2)
        {
            iSumFact = iSumFact + iCnt;
        }
        else if(iNo % iCnt != 0)
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    iDiff = iSumFact - iSumNonFact;

    return iDiff;
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

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}