///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name :  strtoggle
// Description   :  Converts uppercase letters to lowercase
//                  and lowercase letters to uppercase.
// Input         :  Character array (string)
// Output        :  Modified string in-place
// Author        :  Saurabh Santosh Kanade
// Date          :  03/12/2025
//
///////////////////////////////////////////////////////////////

void strtoggle(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;     // Uppercase → lowercase
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;     // Lowercase → uppercase
        }
        str++;
    }
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

    strtoggle(arr);      

    printf("Modified string is : %s\n", arr); 

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Example:
//
// Input  : Marvellous
// Output : mARVELLOUS
//
///////////////////////////////////////////////////////////////
