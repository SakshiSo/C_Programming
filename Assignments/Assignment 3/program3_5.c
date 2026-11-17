/*
    5. Accept on charater from user and check whether that character is vowel(a,e,i,o,u) or not.
    Input: E        Output: TRUE
    Input: d        Output: FALSE
    */

#include<stdio.h>

///////////////////////////////////////////////////
//  Function Name   :   ChkVowel
//  Input           :   Character
//  Output          :   It is vowel or not a vowel
//  Description     :   Checks the character whether a vowel or not
//  Date            :   13/11/2026
//  Author          :   Sakshi Avinash Sonavane
///////////////////////////////////////////////////

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CValue)
{
    if(CValue == 'a' || CValue == 'e' || CValue == 'i' ||
       CValue == 'o' || CValue == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////
//  Entry point of the application
///////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character: ");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not a Vowel");
    }

    return 0;
}