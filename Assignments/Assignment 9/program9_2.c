/*
    2. Accept amount in US dollar and return its corresponding value in Indian currency.
    Consider 1$ as 70 rupees.

    Input: 10
    Output: 700

    Input: 3
    Output: 270

    Input: 1200
    Output: 84000
    
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   DollarToINR
//  Input           :   (Integer) Dollar amount             
//  Output          :   Indian Currency
//  Description     :   Accept amount in dollar and display indian currency value.
//  Date            :   20/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iAns = 0;
    iAns = iNo * 70;
    return iAns;
}

///////////////////////////////////////////////////
// Entry point of the application
///////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter amount of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d", iRet);

    return 0;
}