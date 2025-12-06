///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name :  DisplayDigit
// Description   :  Prints only the digits (0–9) present
//                  in the given string.
// Input         :  Character array (string)
// Output        :  Digits printed on the screen
// Author        :  Saurabh Santosh Kanade
// Date          :  03/12/2025
//
///////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
        }
        str++;
    }
    printf("\n");
}

///////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////

int main()
{
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s", arr);

    printf("Digits in the string : ");
    DisplayDigit(arr);

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Example:
//
// Input  : marve89llous21
// Output : 8921
//
///////////////////////////////////////////////////////////////
