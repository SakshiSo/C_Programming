/*
    3. Write program which accepts range from user and return addition of all numbers in 
    between that range. (Range should contains positive numbers only)

    Input: 23   30
    Output: 212

    Input: 10   18
    Output: 126

    Input: -10  2
    Output: Invalid range

    Input: 90   18
    Output: Invalid range
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   RangeSum
//  Input           :   Integer, Integer
//  Output          :   Addition for user entered range
//  Description     :   accept range and add them all
//  Date            :   24/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if(iStart < 0 || iEnd < 0 || iStart > iEnd)
    {
        printf("Invalid range");   
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

///////////////////////////////////////////////////
// Entry point of the application
///////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet > 0)
    {
        printf("Addition is %d", iRet);
    }

    return 0;
}