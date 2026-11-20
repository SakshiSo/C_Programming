/*
    1. Write a program which accepts number from user and if number is less than 50
    thenprint small, if it is greater then 50 and less than 100 then print medium, 
    if it is greater than 100 then print large.

    Input: 75
    Output: Medium
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   Number
//  Input           :   Integer
//  Output          :   Display small, medium and large 
//  Description     :   Whether user entered number is small, medium or large
//  Date            :   19/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if(iNo >= 50 && iNo < 100)
    {
        printf("Medium");
    } 
    else
    {
        printf("Large");
    }  
}

///////////////////////////////////////////////////
// Entry point of the application
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}