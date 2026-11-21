/*
    5. Write a program which returns difference between 
    even factorial and odd factorial of given number.

    Input: 5
    Output: -7

    Input: -5
    Output: -7
    
    Input: 10
    Output: 2895
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   FactorialDiff
//  Input           :   Integer
//  Output          :   Difference between even and odd factorial
//  Description     :   Print difference for even and odd factorial of user entered number
//  Date            :   21/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0, iEvenFact = 1, iOddFact = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
   
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }
    return iEvenFact - iOddFact;
}

///////////////////////////////////////////////////
// Entry point of the application
///////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d", iRet);

    return 0;
}