///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name :  Pattern
// Description   :  This pattern prints a border of '*' and fills the inner area with '@'
// Input         :  Integer (Number of rows and columns)
// Output        :  Pattern Display
// Author        :  Saurabh Santosh Kanade
// Date          :  22/11/2025
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("*\t");
            }
            else
            {
                printf("@\t");
            }
        }
        printf("\n");
    }
}

//////////////////////////////////////////////////////////////
//
// Entry Point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and colums :");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
//////////////////////////////////////////////////////////////
// input : iRow : 6      iCol :  5
//
// Output :
//            *   *   *   *   *
//            *   @   @   @   *
//            *   @   @   @   *
//            *   @   @   @   *
//            *   *   *   *   *
/////////////////////////////////////////////////////////////