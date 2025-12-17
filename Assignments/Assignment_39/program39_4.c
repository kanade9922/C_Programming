#include<stdio.h>

void Display()
{
    static char ch = 'A';   // static variable to maintain value during recursion

    if(ch > 'F')           // Base condition
    {
        return;
    }

    printf("%c\t", ch);
    ch++;

    Display();          // Recursive call
}

int main()
{
    Display();
    return 0;
}
