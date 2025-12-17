///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name :  StrRevX
// Description   :  Reverses the given string in place
//                  using two pointer technique.
// Input         :  Character array (string)
// Output        :  Modified string (reversed)
// Author        :  Saurabh Santosh Kanade
// Date          :  07/12/2025
//
///////////////////////////////////////////////////////////////

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;     // Point to last character

    while(start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
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
    scanf("%[^\n]", arr);    // corrected scanf

    StrRevX(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Example:
//
// Input  :  Marvellous
// Output :  suollevraM
//
///////////////////////////////////////////////////////////////
