/*
    2. Write a program which accept rnumber from user and display its factors in
    decreasing order.

    Input: 12
    Output: 6   5   4   3   2   1

    Input: 13
    Output: 1

    Input:  10
    Output: 5   2   1
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   FactRev
//  Input           :   Integer
//  Output          :   Factors
//  Description     :   Accept number from user and display factors
//  Date            :   27/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

int FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo / 2; iCnt >= 1;  iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
    }
    return 0;
}

///////////////////////////////////////////////////
// Entry point of the application
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    FactRev(iValue);
    
    return 0;
}