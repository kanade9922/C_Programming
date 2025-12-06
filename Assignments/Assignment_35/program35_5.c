///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name :  Reverse
// Description   :  Prints the given string in reverse order.
// Input         :  Character array (string)
// Output        :  Reversed string printed
// Author        :  Saurabh Santosh Kanade
// Date          :  06/12/2025
//
///////////////////////////////////////////////////////////////

void Reverse(char *str)
{
    char *end = str;

    // Move to the end of string
    while(*end != '\0')
    {
        end++;
    }
    end--; // Move back from null character

    // Print in reverse
    while(end >= str)
    {
        printf("%c", *end);
        end--;
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

    printf("Reversed string : ");
    Reverse(arr);

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Example:
//
// Input  : Marvellous
// Output : suollevraM
//
///////////////////////////////////////////////////////////////
