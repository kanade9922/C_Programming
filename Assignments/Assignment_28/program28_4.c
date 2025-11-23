///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Fuction Name :  Character Pattern Printing
// Description :   It is used to perform display rows and column using Rev Number pattern
// Input :         integer
// Output :        Pattern Display
// Author :        Saurabh Santosh Kanade
// Date :          21/11/2025
//
//////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i= 0, j = 0;
    int iCnt = iRow;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",iCnt);
        }
        iCnt--;
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
// input : iRow : 4      iCol : 5
//
// Output : 4   4   4   4   4  
//          3   3   3   3   3
//          2   2   2   2   2
//          1   1   1   1   1 
/////////////////////////////////////////////////////////////