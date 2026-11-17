/*
    2. Check Leap Year

    Problem Statement: Accept a year and determine whether it is
    a leap year according to Gregorian calendar rules. A year is
    a leap year if it is divisible by 400, or divisible by 4 but 
    not by 100. Consider years less than or equal to zero invalid.

    Expected Output:
    Input: 2024 --> Leap year
    Inpy=ut: 1900 --> Not a leap year
    Input: 2000 --> Leap year
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//  Function Name   :   CheckLeapYear
//  Input           :   Year
//  Output          :   Is it a leap year or not
//  Description     :   Check whether the year is leap year or not
//  Date            :   17/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

void CheckLeapYear(int iYear)
{
    if(iYear <= 0)
    {
        printf("Invalid Year.\n");
    }
    else if(iYear % 400 == 0 || iYear % 4 == 0 && iYear % 100 != 0)
    {
        printf("Leap Year.\n");
    }
    else
    {
        printf("Not a Leap Year.\n");
    }
}

///////////////////////////////////////////////////
// Entry point of the application
///////////////////////////////////////////////////

int main()
{
    int iYear = 0;

    printf("Enter a year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}