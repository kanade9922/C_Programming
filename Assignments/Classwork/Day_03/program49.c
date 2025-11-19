// Factors of 6
#include<stdio.h>


void DisplayNonFactors(int iNo)
{
   iCnt
    for(iCnt = 1;  iCnt < iNo; iCnt++)
    {
         if((iNo % iCnt) != 0)
    {
        printf("%d",iCnt);
    }
    }
}


int main()
{
    int iValue = 0;
    
    printf("Enter number :\n");
    scanf("%d", &iValue);

    DisplayNonFactors(iValue);

    return 0;
}