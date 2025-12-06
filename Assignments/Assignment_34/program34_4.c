///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int bool;

///////////////////////////////////////////////////////////////
//
// Function Name :  ChkSpecial
// Description   :  Checks whether the given character is a 
//                  special symbol (! @ # $ % ^ & *).
// Input         :  Character
// Output        :  TRUE / FALSE
// Author        :  Saurabh Santosh Kanade
// Date          :  04/12/2025
//
///////////////////////////////////////////////////////////////

bool ChkSpecial(char ch)
{
    if((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') ||
       (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter the character :\n");
    scanf("%c", &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special character");
    }
    else
    {
        printf("It is not special character");
    }

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Example:
//
// Input  :  %
// Output :  It is special character
//
// Input  :  A
// Output :  It is not special character
//
///////////////////////////////////////////////////////////////
