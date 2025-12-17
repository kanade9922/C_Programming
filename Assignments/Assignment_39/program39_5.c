#include<stdio.h>

void Display()
{
    static char ch = 'f';   // static variable to maintain value during recursion

    if(ch < 'a')           // Base condition
    {
        return;
    }

    printf("%c\t", ch);
    ch--;

    Display();          // Recursive call
}

int main()
{
    Display();
    return 0;
}
