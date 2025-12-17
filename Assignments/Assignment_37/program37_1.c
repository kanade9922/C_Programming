///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
//   Macro Definitions
//
///////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////
//
//   Type Definition
//
///////////////////////////////////////////////////////////////

typedef int bool;

///////////////////////////////////////////////////////////////
//
// Function Name :  ChkChar
// Description   :  Checks whether a given character is present
//                  in the input string or not.
// Input         :  Character array (string), Character
// Output        :  Boolean (TRUE / FALSE)
// Author        :  Saurabh Santosh Kanade
// Date          :  05/12/2025
//
///////////////////////////////////////////////////////////////

bool ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;    // Character found
        }
        str++;              // Move to next character
    }
    return FALSE;           // Character not found
}

///////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    char cValue;
    bool bRet = FALSE;

    printf("Enter string : \n");
    scanf("%[^\n]", arr);

    printf("Enter character to search : \n");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Example:
//
// Input  :  Marvellous
//           e
// Output :  Character found
//
///////////////////////////////////////////////////////////////
