///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name :  LastChar
// Description   :  Returns the index of last occurrence of
//                  the given character in the input string.
// Input         :  Character array (string), Character
// Output        :  Integer (index position or -1 if not found)
// Author        :  Saurabh Santosh Kanade
// Date          :  08/12/2025
//
///////////////////////////////////////////////////////////////

int LastChar(char *str, char ch)
{
    int i = 0;
    int iPos = -1;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            iPos = i;        // Update last position
        }
        i++;
    }
    return iPos;             // -1 if character not found
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

    printf("Enter the character : \n");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Example:
//
// Input  :  Marvellous Infosystems
//           s
// Output :  Character location is 18
//
///////////////////////////////////////////////////////////////
