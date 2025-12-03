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
// Function Name :  ChkCapital
// Description   :  This function checks whether the entered
//                  character is a capital (uppercase) letter.
// Input         :  Character
// Output        :  TRUE / FALSE
// Author        :  Saurabh Santosh Kanade
// Date          :  30/12/2025
//
///////////////////////////////////////////////////////////////

bool ChkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital character");
    }
    else
    {
        printf("It is not Capital character");
    }

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Example:
//
// Input  :  G
// Output :  It is Capital character
//
// Input  :  g
// Output :  It is not Capital character
//
///////////////////////////////////////////////////////////////
