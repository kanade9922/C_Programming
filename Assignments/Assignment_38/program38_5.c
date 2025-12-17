///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name :  StrCpyToggle
// Description   :  Copies the source string into destination
//                  string by toggling the case of characters.
// Input         :  Character array (source string),
//                  Character array (destination string)
// Output        :  Modified destination string
// Author        :  Saurabh Santosh Kanade
// Date          :  09/12/2025
//
///////////////////////////////////////////////////////////////

void StrCpyToggle(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src + 32;   // Capital to small
        }
        else if(*src >= 'a' && *src <= 'z')
        {
            *dest = *src - 32;   // Small to capital
        }
        else
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0';   // Null terminate destination string
}

///////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];

    StrCpyToggle(arr, brr);

    printf("%s\n", brr);

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Example:
//
// Input  :  Marvellous Python 2
// Output :  mARVELLOUS pYTHON 2
//
///////////////////////////////////////////////////////////////
