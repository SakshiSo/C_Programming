/*
    4. Write a program which accept number from user and count 
    frequency of 4 in it.

    Input: 2395
    Output: 0

    Input: 1018
    Output: 0

    Input: 9440
    Output: 4

    Input: 922432
    Output: 1
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   CheckFour
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Accept number and count how many four are there
//  Date            :   25/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

int CountFour(int iNo)
{
    int iCnt = 0, iDigit = 0;

    while(iNo)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 4)
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

    iRet = CountFour(iValue);

    printf("%d", iRet);

    return 0;
}