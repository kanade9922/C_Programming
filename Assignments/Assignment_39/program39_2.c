#include<stdio.h>

void Display()
{
    static int i = 1;   // static variable to maintain value during recursion

    if(i > 5)           // Base condition
    {
        return;
    }

    printf("%d\t", i);
    i++;

    Display();          // Recursive call
}

int main()
{
    Display();
    return 0;
}
