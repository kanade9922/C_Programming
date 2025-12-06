///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int bool;///////////////////////////////////////////////////////////////
//
// Function Name :  ChkVowels
// Description   :  Checks if the given string contains any
//                  vowels (a, e, i, o, u)
// Input         :  Character array (string)
// Output        :  TRUE / FALSE
// Author        :  Saurabh Santosh Kanade
// Date          :  02/12/2025
//
///////////////////////////////////////////////////////////////


bool ChkVowels(char *str)
{
    while(*str != '\0')
    {
       if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
       {
        return TRUE;
       }
       str++;
    }
    return FALSE;
}

///////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    bool bRet = FALSE;

    printf("Enter String : \n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowels(arr);
    if(bRet == TRUE)
    {
        printf("Contains Vowels");
    }
    else
    {
        printf("There is no Vowels");
    }

    return 0;
}
//////////////////////////////////////////////////////////////
//
// Example:
//
// Input  : Marvellous
// Output : Contains Vowels
//
// Input  : SKY
// Output : No Vowels Found
//
///////////////////////////////////////////////////////////////