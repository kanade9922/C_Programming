#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>   // for tolower()

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{
    cValue = tolower(cValue);   // convert to lowercase
    if(cValue=='a' || cValue=='e' || cValue=='i' || cValue=='o' || cValue=='u')
        return TRUE;
    else
        return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character :\n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
        printf("It is Vowel");
    else
        printf("It is not Vowel");

    return 0;
}
