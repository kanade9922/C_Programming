///////////////////////////////////////////////////////////////
//
//   Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name :  DisplayASCII
// Description   :  This function displays the ASCII table from
//                  0 to 255 with Decimal, Hex, Octal values.
// Input         :  - (No input)
// Output        :  Prints ASCII Table
// Author        :  Saurabh Santosh Kanade
// Date          :  04/12/2025
//
///////////////////////////////////////////////////////////////

void DisplayASCII()
{
    printf("---------------------------------------------------------\n");
    printf(" Decimal\tHex\tOctal\tCharacter\n");
    printf("---------------------------------------------------------\n");

    for(int i = 0; i <= 255; i++)
    {
        char ch;

        if(i < 32 || i == 127)
        {
            ch = '-';   // Non-printable character
        }
        else
        {
            ch = i;     // Printable character
        }

        printf(" %3d\t\t%02X\t%03o\t%c\n", i, i, i, ch);
    }

    printf("---------------------------------------------------------\n");
}

///////////////////////////////////////////////////////////////
//
// Entry Point Function of the Application
//
///////////////////////////////////////////////////////////////

int main()
{
    DisplayASCII();
    return 0;
}

///////////////////////////////////////////////////////////////
//
// Example:
//
// Output : Complete ASCII table from 0 to 255
//
///////////////////////////////////////////////////////////////
