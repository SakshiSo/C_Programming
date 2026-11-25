/*
    3. Write program which accepts number from user and count frequency
    of 2 in it.
    
    Input: 2395
    Output: 1

    Input: 1018
    Output: 0

    Input: 9000
    Output: 0

    Input: 922432
    Output: 3
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   CountTwo
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   accept number and count how many two are there
//  Date            :   24/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

int CountTwo(int iNo)
{
    int iCnt = 0, iDigit = 0;

    while(iNo)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 2)
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

    iRet = CountTwo(iValue);
    
    printf("%d", iRet);
    
    return 0;
}