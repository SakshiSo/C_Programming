/*
    1. Write a program which accept radius of circle from user and calculate its area.
    Consider value of PI as 3.14. (Area = PI * Radius * Radius)

    Input: 5.3
    Output: 88.2026

    Input: 10.4
    Output: 339.6224
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   CircleArea
//  Input           :   Double
//  Output          :   Area of circle
//  Description     :   Print area of circle for user entered number
//  Date            :   21/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    double dArea = 0.0f;
    dArea = 3.14 * fRadius * fRadius;
    return dArea;
}

///////////////////////////////////////////////////
// Entry point of the application
///////////////////////////////////////////////////

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is: %.4f", dRet);

    return 0;
}