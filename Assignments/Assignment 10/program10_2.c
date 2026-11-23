/*
    2. Write a program which accept width & height of rectangle 
    from user and calculate its area. (Area = width * height)

    Input: 5.3  9.78
    Output: 51.834
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   RectArea
//  Input           :   Double
//  Output          :   Area of rectangle
//  Description     :   Print area of rectangle for user entered number
//  Date            :   21/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0f;
    dArea = fWidth * fHeight;
    return dArea;
}

///////////////////////////////////////////////////
// Entry point of the application
///////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f", &fValue1);

    printf("Enter height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle is: %.3f", dRet);

    return 0;
}