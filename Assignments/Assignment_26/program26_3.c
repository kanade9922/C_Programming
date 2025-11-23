///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Fuction Name :  Character Pattern Printing
// Description :   It is used to perform no and * pattern
// Input :         integer
// Output :        integer
// Author :        Saurabh Santosh Kanade
// Date :          21/11/2025
//
//////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t*\t",iCnt);
        }
        else
        {
            printf("%d\t *\t",iCnt);
        }
    }
}

//////////////////////////////////////////////////////////////
//
// Entry Point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////
//
// input : 5         Output :  1   *  2   *   3   *    4    *    5
//
/////////////////////////////////////////////////////////////