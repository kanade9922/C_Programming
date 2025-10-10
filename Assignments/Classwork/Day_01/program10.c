/*     
----------STEPS---------------------
    Step 1:  Understand the problem statement
    Step 2: Write a program
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

///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Fuction Name :  AdditionTwoNumbers
// Description :   It is used to perform addition
// Input :         float, float
// Output :        float
// Author :        Saurabh Santosh Kanade
// Date :          09/10/2025
//
//////////////////////////////////////////////////////////////

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

//////////////////////////////////////////////////////////////
//
// Entry Point function for the application
//
//////////////////////////////////////////////////////////////

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

//////////////////////////////////////////////////////////////
//
//  Input1: 10.5    Input1 : 3.2    Output : 13.7 
//  Input1: -10.5   Input1 : 3.2    Output : 13.7 
//  Input1: 10.5    Input1 : -3.2   Output : 13.7
//  Input1: -10.5   Input1 : -3.2   Output : 13.7
//  Input1: 10.5    Input1 : 0.0    Output : 10.5
//
//////////////////////////////////////////////////////////////