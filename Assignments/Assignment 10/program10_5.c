/*
    5. Write a program which accept area in square feet and convert it 
    into square meter. (1 square feet = 0.0929 square meter)

    Input: 5
    Output: 0.464515

    Input: 7;
    Output: 0.650321
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   SquareMeter
//  Input           :   Square feet
//  Output          :   Square meter
//  Description     :   Print square feet to square meter
//  Date            :   23/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    double dMeter = 0.0;

    if(iValue > 0)
    {
        dMeter = iValue * 0.092903;
    }
    return dMeter;
}

///////////////////////////////////////////////////
// Entry point of the application
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet:" );
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter: %lf", dRet);

    return 0;
}