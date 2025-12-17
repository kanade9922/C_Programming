///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name :  CountChar
// Description   :  Counts the frequency of a given character
//                  in the input string.
// Input         :  Character array (string), Character
// Output        :  Integer (frequency of character)
// Author        :  Saurabh Santosh Kanade
// Date          :  06/12/2025
//
///////////////////////////////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
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
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^\n]", arr);     // corrected scanf

    printf("Enter the character :\n");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Example:
//
// Input  :  Marvellous Infosystems
//           s
// Output :  Character frequency is 4
//
///////////////////////////////////////////////////////////////
