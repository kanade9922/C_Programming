///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Fuction Name :  Character Pattern Printing
// Description :   It is used to perform display rows and column using charactor pattern
// Input :         integer
// Output :        integer
// Author :        Saurabh Santosh Kanade
// Date :          21/11/2025
//
//////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i= 0, j = 0;
    char ch = 'A';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);
        }
        ch++;
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
// input : iRow : 3      iCol : 5
//
// Output : A   A   A   A   A   B
//          B   B   B   B   B   B
//          C   C   C   C   C   C
//                     
/////////////////////////////////////////////////////////////