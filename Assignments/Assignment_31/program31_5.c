///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name :  Pattern
// Description   :  This program prints an increasing number pattern diagonally
// Input         :  Integer (Number of rows and columns)
// Output        :  Pattern Display
// Author        :  Saurabh Santosh Kanade
// Date          :  23/11/2025
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
        {
            printf("Invalid Input\n");
            printf("Row number and column number should be same\n");
            
            return;
        }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
           if(j >= i)
           {
              printf("%d\t",j);
           }
           else
           {
               printf("\t");
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
// input : iRow : 4      iCol :  4
//
// Output :   1   2   3   4
//                2   3   4     
//                    3   4
//                        4
//        
/////////////////////////////////////////////////////////////