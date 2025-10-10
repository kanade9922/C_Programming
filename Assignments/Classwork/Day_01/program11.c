

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

float AdditionTwoNumbers(
                           float fNo1,            // First input
                           float fNo2             // second input
                        )
{
    float fSum = 0.0f;                            // To store the result

                                                  // Updater
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)                               // Updater
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;                          // Business logic
    return fSum;
}   // End of AdditionTwoNumbers

//////////////////////////////////////////////////////////////
//
// Entry Point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
     float fValue1 = 0.0f , fValue2 = 0.0f;      // To Accept user input
     float fRet = 0.0f;                          // To store the result

     printf("Enter first Number : \n");           
     scanf("%f",&fValue1);

     printf("Enter second Number : \n");
     scanf("%f",&fValue2);

     fRet= AdditionTwoNumbers(fValue1,fValue2);  // Method call

     printf("Addition is : %f\n",fRet);

    return 0;
}   // End of main

//////////////////////////////////////////////////////////////
//
//  Input1: 10.5    Input1 : 3.2    Output : 13.7 
//  Input1: -10.5   Input1 : 3.2    Output : 13.7 
//  Input1: 10.5    Input1 : -3.2   Output : 13.7
//  Input1: -10.5   Input1 : -3.2   Output : 13.7
//  Input1: 10.5    Input1 : 0.0    Output : 10.5
//
//////////////////////////////////////////////////////////////