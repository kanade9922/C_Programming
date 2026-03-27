#include<stdio.h>

float Add(float a, float b)
{
    float sum = 0;
    sum = a + b;  // Business logic
    return sum;
}

int main()
{
     float i = 0 , j = 0 , ans = 0;

     printf("Enter first Number : \n");
     scanf("%f",&i);

     printf("Enter second Number : \n");
     scanf("%f",&j);

     ans= Add(i,j);

     printf("Addition is : %f\n",ans);

    return 0;
}