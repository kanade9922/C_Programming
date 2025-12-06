///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name :  Difference
// Description   :  Calculates difference between number of
//                  capital letters and small letters.
//                  (Difference = CapitalCount – SmallCount)
// Input         :  String
// Output        :  Integer (difference)
// Author        :  Saurabh Santosh Kanade
// Date          :  02/12/2025
//
///////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCapital = 0;
    int iSmall = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }
        str++;
    }
    return iCapital - iSmall;
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

    printf("Enter String : \n");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("%d", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Example:
//
// Input  :  aAAbc
// Capital = 3
// Small   = 2
// Output  :  1
//
///////////////////////////////////////////////////////////////
