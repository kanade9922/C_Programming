#include <stdio.h>

void DisplayEvenFactor(int iNo)
{
    if(iNo < 0)
        iNo = -iNo;

    for(int i = 1; i <= iNo / 2; i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))  // factor and even
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}
