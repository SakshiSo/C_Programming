/*
    3. Calculate Shopping Discount

    Problem Statement: Accept the total purchase amount and 
    calculate the final payable amount after applying the 
    following discount. Negative purchase amounts are invalid.

    ---------------------------------------------------------
        Purchase Amount             Discount
    ---------------------------------------------------------
        Below Rs.1000                   0%
        Rs.1000 to below Rs.5000        10%
        Rs.5000 and above               20%
    ---------------------------------------------------------

    Expected Output:
    Input: 800 --> Payable Amount = 800.00
    Input: 2000 --> Payable Amount = 1800.00
    Input: 6000 --> Payable Amount = 4800.00
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//  Function Name   :   CalculateDiscount
//  Input           :   Total purchase amount
//  Output          :   final payable amount
//  Description     :   Total Payable amount after applying discount
//  Date            :   17/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 0)
    {
        printf("Invalid Amount");
    }

    if(fAmount < 1000)
    {
        fDiscount = 0;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %f", fFinalAmount);
    }
    else if(fAmount >= 1000 && fAmount < 5000)
    {
        fDiscount = fAmount * 0.10;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %f", fFinalAmount);
    }
    else if(fAmount >= 5000)
    {
        fDiscount = fAmount * 0.20;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %f", fFinalAmount);
    }
}

///////////////////////////////////////////////////
// Entry point of the application
///////////////////////////////////////////////////

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}