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
// Function Name :  ChkSmall
// Description   :  This function checks whether the entered
//                  character is a small (lowercase) letter.
// Input         :  Character
// Output        :  TRUE / FALSE
// Author        :  Saurabh Santosh Kanade
// Date          :  30/12/2025
//
///////////////////////////////////////////////////////////////

bool ChkSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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

    printf("Enter the character : \n");
    scanf("%c", &cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case Character");
    }
    else
    {
        printf("It is not Small case Character");
    }

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Example:
//
// Input  :  g
// Output :  It is Small case Character
//
// Input  :  G
// Output :  It is not Small case Character
//
///////////////////////////////////////////////////////////////
