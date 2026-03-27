#include<stdio.h>

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0;

    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }
    fSum = fNo1 + fNo2;  // Business logic

    return fSum;
}

int main()
{
     float i = 0 , j = 0 , ans = 0;

     printf("Enter first Number : \n");
     scanf("%f",&i);

     printf("Enter second Number : \n");
     scanf("%f",&j);

     ans= AdditionTwoNumbers(i,j);

     printf("Addition is : %f\n",ans);

    return 0;
}