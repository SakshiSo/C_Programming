/*
    5. Write a program which accept number from user and return difference between summation of even
    digits and summation of odd digits.

    Input: 2395
    Output: -15

    Input: 1018
    Output: 6

    Input: 8440
    Output: 16

    Input: 5733
    Output: -18
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   CountDiff
//  Input           :   Integer
//  Output          :   Difference 
//  Description     :   Accept number from user and display difference between even and odd digits
//  Date            :   25/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0, iDiff = 0;
    int sumEven = 0, sumOdd = 0;

    while(iNo)
    {
        iDigit = iNo % 10;
        
        if(iDigit % 2 == 0)
        {
            sumEven = sumEven + iDigit;
        }
        else
        {
            sumOdd = sumOdd + iDigit;
        }
        iNo = iNo / 10;
    }
    iDiff = sumEven - sumOdd;
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

    iRet = CountDiff(iValue);

    printf("%d", iRet);

    return 0;
}