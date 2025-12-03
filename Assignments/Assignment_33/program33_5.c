///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int bool;

///////////////////////////////////////////////////////////////
//
// Function Name :  DisplaySchedule
// Description   :  This function displays the exam schedule
//                  based on the entered division (A, B, C, D).
// Input         :  Character (Division)
// Output        :  TRUE / FALSE
// Author        :  Saurabh Santosh Kanade
// Date          :  30/12/2025
//
///////////////////////////////////////////////////////////////

bool DisplaySchedule(char chDiv)
{
    if(chDiv == 'A')
    {
        printf("Exam of division A at 7 AM\n");
        return TRUE;
    }
    else if(chDiv == 'B')
    {
        printf("Exam of division B at 8 AM\n");
        return TRUE;
    }
    else if(chDiv == 'C')
    {
        printf("Exam of division C at 9 AM\n");
        return TRUE;
    }
    else if(chDiv == 'D')
    {
        printf("Exam of division D at 10 AM\n");
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////////////////
//
// Entry Point Function of the Application
//
///////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter the Division : \n");
    scanf("%c", &cValue);

    bRet = DisplaySchedule(cValue);

    if(bRet == FALSE)
    {
        printf("Invalid division\n");
    }

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Example:
//
// Input  :  A
// Output :  Exam of division A at 7 AM
//
// Input  :  Z
// Output :  Invalid division
//
///////////////////////////////////////////////////////////////
