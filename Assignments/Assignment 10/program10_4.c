/*
    4. Write a program which accepts temperature in Fahrenheit and convert it into celsius.
    (1 celsius = (Farhrenheit - 32) * (5/9))
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   FhtoCs
//  Input           :   Integer
//  Output          :   Convert Fahrenheit to celsius
//  Description     :   Accept temperature in Fahrenheit and convert it to celsius.
//  Date            :   23/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dCs = 0.0;

    dCs = ((fTemp - 32.0) * (5.0/9.0));

    return dCs;
}

///////////////////////////////////////////////////
// Entry point of the application
///////////////////////////////////////////////////

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Farhrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius: %lf", dRet);

    return 0;
}