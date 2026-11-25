/*
    3. Write program which accepts number from user and return the count of digits
    in between 3 and 7.
    of 2 in it.
    
    Input: 2395
    Output: 1

    Input: 1018
    Output: 0

    Input: 4521
    Output: 2

    Input: 9922
    Output: 0
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   CountRange
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   accept number and count digits in between 3 and 7
//  Date            :   25/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iCnt = 0, iDigit = 0;

    while(iNo)
    {
        iDigit = iNo % 10;
        if(iDigit > 3 && iDigit < 7)
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

    iRet = CountRange(iValue);
    
    printf("%d", iRet);
    
    return 0;
}