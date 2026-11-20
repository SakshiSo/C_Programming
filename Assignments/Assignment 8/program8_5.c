/*
    5. Write a program which accepts number from user and display its table in reverse

    Input: 2
    Output: 20  18  16  14  12  10  8   6   4   2

    Input: 5
    Output: 50  45  40  35  30  25  20  15  10  5
    
    Input: -5
    Output: 50  45  40  35  30  25  20  15  10  5
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   Table
//  Input           :   Integer
//  Output          :   Table
//  Description     :   Print table for user entered number
//  Date            :   20/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
    iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        int iRet = iNo * iCnt;
        printf("%d\t", iRet);
    }
}

///////////////////////////////////////////////////
// Entry point of the application
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);
    
    Table(iValue);

    return 0;
}