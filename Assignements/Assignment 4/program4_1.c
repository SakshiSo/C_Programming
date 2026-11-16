/*
    1. Check whether a number is positive or negative

    Problem Statement: Write a C program that accepts an integer 
    from user and determines whether the entered number is 
    positive or negative.

    Expected output:
    Input: 15 --> Positive number
    Input: -8 --> Negative number
    Input:  0 --> Zero 
*/

#include<stdio.h>

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("%d is a positive number.\n", iValue);
    }
    else if(iValue < 0)
    {
        printf("%d is a negative number.\n", iValue);
    }
    else
    {
        printf("The number is zero.\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return 0;
}