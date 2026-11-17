/*
    3. Calculate Student Grade

    Problem Statement: Accept the marks of a student out of 100
    and display the grade according to the following criteria.
    Marks outside 0-100 are invalid.

    -------------------------------------------
        Marks             Grade
        90-100              A
        75-89               B
        60-74               C
        40-59               D
        Below 40            F
    -------------------------------------------

    Expected Output:
    Input: 85 --> Grade B
    Input: 35 --> Fail
    Input: 105 --> Invalid Marks
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//  Function Name   :   DisplayGrade
//  Input           :   Marks
//  Output          :   Grade of the student
//  Description     :   Display the grade of the student based on marks
//  Date            :   17/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

void DisplayGrade(float fMarks)
{
    if(fMarks <  0.0f || fMarks > 100.0f)
    {
        printf("Invalid Marks.\n");
        return;
    }

    if(fMarks >= 90.0f)
    {
        printf("Grade A");
    }
    else if(fMarks >= 75.0f)
    {
        printf("Grade B");
    }
    else if(fMarks >= 60.0f)
    {
        printf("Grade C");
    }
    else if(fMarks >= 40.0f)
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }
    
}

///////////////////////////////////////////////////
// Entry point of the application
///////////////////////////////////////////////////

int main()
{
    float fMarks = 0.0f;

    printf("Enter Marks: ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}