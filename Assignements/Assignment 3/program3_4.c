/*
    4. Accept one character from user and convert case to that charater.
    Input: a        Output: A
    Input: D        Output: d
*/

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   DisplayConvert
//  Input           :   Character
//  Output          :   Converted character
//  Description     :   Convert case of given character.
//  Date            :   13/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

char DisplayConvert(char CValue)
{
    if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c", CValue + 32);
    }
    else
    {
        printf("%c", CValue - 32);
    }   
}

///////////////////////////////////////////////////
//  Entry point of the application
///////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}

