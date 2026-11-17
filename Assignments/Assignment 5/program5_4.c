/*
    4. Check divisibility by 3 and 5

    Problem statement: accept an integer and determine whether 
    it is divisible by both 3 and 5, only 3, only 5, or neither

    Expected Output:
    Input: 15 --> Divisible by Both
    Input: 9 --> Divisible by 3 Only
    Input: 10 --> Divisible by 5 Only
    Input: 7 --> Not Divisible by Either
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//  Function Name   :   CheckMultipleDivisibility
//  Input           :   Integer
//  Output          :   Divisibility Result
//  Description     :   Check divisibility by 3, 5 or neither
//  Date            :   17/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

void CheckMultipleDivisibility(int iValue)
{
    if(iValue % 3 == 0 && iValue % 5 == 0)
    {
        printf("Divisible by Both");
    }
    else if(iValue % 3 == 0)
    {
        printf("Divisible by 3 Only");
    }
    else if(iValue % 5 == 0)
    {
        printf("Divisible by 5 Only");
    }
    else
    {
        printf("Not Divisible by Either");
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

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}