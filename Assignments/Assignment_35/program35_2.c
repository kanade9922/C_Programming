///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name :  CountSmall
// Description   :  Counts the number of small letters (a–z)
//                  in the given string.
// Input         :  Character Array (String)
// Output        :  Integer count
// Author        :  Saurabh Santosh Kanade
// Date          :  02/12/2025
//
///////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
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

    iRet = CountSmall(arr);

    printf("%d", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Example:
//
// Input  :  Marvellous Infosystem
// Output :  17
//
///////////////////////////////////////////////////////////////
