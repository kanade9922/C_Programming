// Factors of 6
#include<stdio.h>


void DisplayFactors(int iNo)
{
   iCnt
    for(iCnt = 1;  iCnt <= iNo/2; iCnt++)
    {
         if((iNo % iCnt) == 0)
    {
        printf("%d\n",iCnt);
    }
    }
}

// Time complexity : N/2

int main()
{
    int iValue = 0;
    
    printf("Enter number :\n");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0;
}