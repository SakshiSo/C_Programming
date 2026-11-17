/*
    1. Calculate Electricity Bill

    Problem Statement: Accept the number of electricity units consumed
    and calculate the total bill using the following slab-wise rates.
    Each slab rate applies only to units within that slab.

    --------------------------------------------------
        Units Consumed              Rate
    --------------------------------------------------
        First 100 units             Rs. 5 per unit
        Next 100 units              Rs. 7 per unit
        Above 200 units             Rs. 10 per unit
    --------------------------------------------------

    Negative unit consumption is invalid.

    Expected Output:
    Input: 80 --> Bill = 400.00
    Input: 150 --> Bill = 850.00
    Input: 250 --> Bill = 1700.00
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//  Function Name   :   CalculateElectricityBill
//  Input           :   Integer as electricity units
//  Output          :   Total bill
//  Description     :   Total bill using slab rates
//  Date            :   17/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits <= 0)
    {
        printf("Invalid Units");
    }

    if(iUnits > 0 && iUnits <= 100)
    {
        fBill = iUnits * 5;
        printf("%f", fBill);
    }
    else if(iUnits > 100 && iUnits <= 200)
    {
        fBill = (100 * 5) + (iUnits-100) * 7;
        printf("%f", fBill);
    }
    else if(iUnits >= 200)
    {
        fBill = (100 * 5) + (100 * 7) + (iUnits-200) * 10;
        printf("%f", fBill);
    }
}

///////////////////////////////////////////////////
// Entry point of the application
///////////////////////////////////////////////////

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}