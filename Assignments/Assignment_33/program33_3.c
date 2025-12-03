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
// Function Name :  ChkDigit
// Description   :  This function checks whether the entered
//                  character is a digit (0–9).
// Input         :  Character
// Output        :  TRUE / FALSE
// Author        :  Saurabh Santosh Kanade
// Date          :  30/12/2025
//
///////////////////////////////////////////////////////////////

bool ChkDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
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
// Entry Point Function of the Application
//
///////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter the character: \n");
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is digit");
    }
    else
    {
        printf("It is not digit");
    }

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Example:
//
// Input  :  5
// Output :  It is digit
//
// Input  :  A
// Output :  It is not digit
//
///////////////////////////////////////////////////////////////
