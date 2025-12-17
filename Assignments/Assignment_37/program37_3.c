///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name :  FirstChar
// Description   :  Returns the index of first occurrence of
//                  the given character in the input string.
// Input         :  Character array (string), Character
// Output        :  Integer (index position or -1 if not found)
// Author        :  Saurabh Santosh Kanade
// Date          :  08/12/2025
//
///////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            return i;       // Return index if found
        }
        i++;
    }
    return -1;              // Character not found
}

///////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////

int main()
{
    char arr[30];
    char cValue;
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^\n]", arr);      // corrected scanf

    printf("Enter the character : \n");
    scanf(" %c", &cValue);

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Example:
//
// Input  :  Marvellous
//           l
// Output :  Character location is 4
//
///////////////////////////////////////////////////////////////
