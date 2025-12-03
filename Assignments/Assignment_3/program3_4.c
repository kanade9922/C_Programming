#include <stdio.h>
#include<stdbool.h>

bool DisplayConvert(char cValue)
{
   if(cValue >= 'a' && cValue <= 'z')          
   {
        printf("%c ", cValue - ('a' - 'A'));    
   }
   else if(cValue >= 'A' && cValue <= 'Z')     
   {
        printf("%c", cValue + ('a' - 'A'));     
   }
}

int main()
{
   char cValue = '\0';   
   
   printf("Enter character :\n");
   scanf("%c", &cValue);

   DisplayConvert(cValue);

   return 0;
}
