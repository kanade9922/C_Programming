///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name :  StrCpySmall
// Description   :  Copies the source string into destination
//                  string by converting all uppercase letters
//                  into lowercase.
// Input         :  Character array (source string),
//                  Character array (destination string)
// Output        :  Modified destination string
// Author        :  Saurabh Santosh Kanade
// Date          :  08/12/2025
//
///////////////////////////////////////////////////////////////

void StrCpySmall(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src + 32;   // Convert to lowercase
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
    char brr[30];    // Empty string

    StrCpySmall(arr, brr);

    printf("%s\n", brr);

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Example:
//
// Input  :  Marvellous Python 2
// Output :  marvellous python 2
//
///////////////////////////////////////////////////////////////
