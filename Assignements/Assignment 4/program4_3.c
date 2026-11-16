/*
    3.  Find the greater of two numbers

    Problem Statement: Accept two integers and determine which 
    number is greater. If both numbers are equal, display an
    appropriate message.

    Expected Output:
    Input: 10, 20 --> 20 is Greater
    Input: 50, 30 --> 50 is Greater
    Input: 15, 15 --> Both Numbers Are Equal
*/

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////
//  Function Name   :   FindGreater
//  Input           :   Two Integers
//  Output          :   Greater number or Equal number
//  Description     :   Compares two integers and finds the greater one
//  Date            :   16/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d  is Greater.", iFirst);
    }
    else if(iFirst < iSecond)
    {
        printf("%d is Greater.", iSecond);
    }
    else
    {
        printf("Both Numbers are Equal.");
    }
}

///////////////////////////////////////////////////
// Entry point of the application
///////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}