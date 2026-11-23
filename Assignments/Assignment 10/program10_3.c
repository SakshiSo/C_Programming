/*
    3. Write program which accepts distance in kilometer and convert it into meter.
    (1 kilometer = 1000 meter)

    Input: 5
    Output: 5000

    Input: 12
    Output: 12000
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   KMtoMeter
//  Input           :   Integer
//  Output          :   distance in meter
//  Description     :   accept distance in kilometer and convert it to meter
//  Date            :   21/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    int iMeter = 0;
    iMeter = iNo * 1000;
    return iMeter;
}

///////////////////////////////////////////////////
// Entry point of the application
///////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in KM: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meter: %d", iRet);

    return 0;
}