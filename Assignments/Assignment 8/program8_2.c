/*
    2. Accept single digit number from user and print it into word.

    Input: 9
    Output: Nine

    Input: -3
    Output: Three

    Input: 12
    Output: Invalid Number
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   Display
//  Input           :   Integer
//  Output          :   Word
//  Description     :   Accept single digit number and display it into word
//  Date            :   19/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    switch (iNo)
    {
    case 0:
        printf("Zero");
        break;
    
    case 1:
        printf("One");
        break;
        
    case 2:
        printf("Two");
        break;
    
    case 3:
        printf("Three");
        break;
    
    case 4:
        printf("Four");
        break;

    case 5:
        printf("Five");
        break;

    case 6:
        printf("Six");
        break;

    case 7:
        printf("Seven");
        break;

    case 8:
        printf("Eight");
        break;

    case 9:
        printf("Nine");
        break;

    default:
        printf("Invalid");
        break;
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

    Display(iValue);

    return 0;
}