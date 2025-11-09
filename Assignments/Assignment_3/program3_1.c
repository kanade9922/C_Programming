#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt =0;

    if(iNo <= 0)
    {
        return;
    }

    for( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt * 2); 
    }
    printf("\n"); 
}

int main()
{
    int iValue;

    printf("Enter number : ");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}
