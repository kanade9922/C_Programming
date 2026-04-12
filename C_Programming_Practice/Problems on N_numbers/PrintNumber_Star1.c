#include<stdio.h>

void Display()
{

    int iCnt = 0;

    for(iCnt = 1; iCnt<= 3; iCnt++)
    {
        printf("__\t*\t");
    }

    printf("\n");
}

int main()
{
      Display();

    return 0;
}