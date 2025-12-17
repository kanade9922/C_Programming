///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name :  StrCpyCap
// Description   :  Copies the source string into destination
//                  string by converting all lowercase letters
//                  into uppercase.
// Input         :  Character array (source string),
//                  Character array (destination string)
// Output        :  Modified destination string
// Author        :  Saurabh Santosh Kanade
// Date          :  07/12/2025
//
///////////////////////////////////////////////////////////////

void StrCpyCap(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'a' && *src <= 'z')
        {
            *dest = *src - 32;   // Convert to uppercase
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

    StrCpyCap(arr, brr);

    printf("%s\n", brr);

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Example:
//
// Input  :  Marvellous Python 2
// Output :  MARVELLOUS PYTHON 2
//
///////////////////////////////////////////////////////////////
