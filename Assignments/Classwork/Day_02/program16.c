////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////

#include<stdio.h>                    // For input output
#include<stdbool.h>                  // For bool Datatype

////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description :   It is used to check even or odd
//  Input :         Interger
//  Output :        Boolean
//  Auther :        Saurabh Santosh Kanade
//  Date :          11/10/2025
//
////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
    { return true; }
    else
    {return false; }
}

////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {printf("%d is Even number\n",iValue); }
    else
    { printf("%d is odd number\n",iValue);  }
    
    return 0;
}