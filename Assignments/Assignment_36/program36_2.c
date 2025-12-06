///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name :  struprx
// Description   :  Converts all lowercase letters in a string
//                  to uppercase letters.
// Input         :  Character array (string)
// Output        :  Modified string in-place
// Author        :  Saurabh Santosh Kanade
// Date          :  03/12/2025
//
///////////////////////////////////////////////////////////////

void struprx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32; // Convert lowercase to uppercase
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

    printf("Enter string: \n");
    scanf("%[^'\n']s", arr);

    struprx(arr);

    printf("Modified string is: %s\n", arr);

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Example:
//
// Input  : marvellous
// Output : MARVELLOUS
//
///////////////////////////////////////////////////////////////
