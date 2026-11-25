/*
    5. Write a program which accept number from user and count frequency of such a digits
    which are less than 6.

    Input: 2395
    Output: 3

    Input: 1018
    Output: 3

    Input: 1018
    Output: 3

    Input: 9440
    Output: 3

    Input: 96672
    Output: 1
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   Count
//  Input           :   Integer
//  Output          :   Range in Reverse order
//  Description     :   Print range in reverse order for user entered range
//  Date            :   24/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

int Count(int iNo)
{
    int iCnt = 0, iDigit = 0;

    while(iNo)
    {
        iDigit = iNo % 10;
        
        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("%d", iRet);

    return 0;
}