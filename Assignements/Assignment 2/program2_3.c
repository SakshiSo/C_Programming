/*
    3. Accept on number from user if number is less than 10 then print "Hello" otherwise print "Demo".
*/

#include<stdio.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display 
//  Input           :   Integer
//  Output          :   Void
//  Description     :   Displays "Hello" or "Demo" based on the input number
//  Date            :   12/11/2026
//  Author          :   Sakshi Avinash Sonavane
//
///////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");    
    }
    else
    {
        printf("Demo");
    }
}

///////////////////////////////////////////////////
//  Entry point of the application
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", & iValue);

    Display(iValue);

    return 0;
}