///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name :  CountWhite
// Description   :  Counts the number of whitespace characters
//                  (spaces) in the given string.
// Input         :  Character array (string)
// Output        :  Integer (count of spaces)
// Author        :  Saurabh Santosh Kanade
// Date          :  03/12/2025
//
///////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCount = 0;
     
    while(*str != '\0')
    {
        if(*str == ' ')
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
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces : %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Example:
//
// Input  : "Marvellous Infosystems Pune"
// Output : 2
//
///////////////////////////////////////////////////////////////
