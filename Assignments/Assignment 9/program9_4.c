/*
    3. Write a program to find even factorial of given number.

    Input: 5
    Output: 15     (5*3*1)

    Input: -5
    Output: 15     (5*3*1)

    Input: 10
    Output: 945     (9*7*5*3*1)
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   OddFactorial
//  Input           :   Integer
//  Output          :   Odd Factorial
//  Description     :   Print odd factorial of user entered number.
//  Date            :   21/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iCnt = 0, iFact = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // if(iNo % 2 == 0)
    // {
    //     iNo--;
    // }

    // for(iCnt = iNo; iCnt >= 1; iCnt = iCnt - 2)
    // {
    //     iFact = iFact * iCnt;
    // }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iCnt % 2) != 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
    
}

///////////////////////////////////////////////////
// Entry point of the application
///////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d", iRet);

    return 0;
}