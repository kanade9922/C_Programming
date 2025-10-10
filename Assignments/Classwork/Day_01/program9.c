/*     
----------STEPS---------------------
    Step 1:  Understand the problem statement
    Step 2: write a program
    Step 3: Describe the programming lang
    Step 4: Write the program
    Step 5: Test the program

*/

/*
 -----------Algorithm----------

   START
        Accept first no as No1
        Accept Second no as No2
        If the input is Negative convert it into Positive
        Perform Addition of No1 and No2
        Display the addition on screen
   STOP

*/

#include<stdio.h>

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0;

    //Updater
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
     float fValue1 = 0.0f , fValue2 = 0.0f , fRet = 0.0f;

     printf("Enter first Number : \n");
     scanf("%f",&fValue1);

     printf("Enter second Number : \n");
     scanf("%f",&fValue2);

     fRet= AdditionTwoNumbers(fValue1,fValue2);

     printf("Addition is : %f\n",fRet);

    return 0;
}