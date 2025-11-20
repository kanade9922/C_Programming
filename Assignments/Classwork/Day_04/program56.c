#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
   

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;           // optimization 
        }
    }
    
    
    if(iCnt > (iNo/2))       // No factor
    {
        return true;   
    }
    else                      // At least one factor
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);
   
    if (bRet == true)
    {
        printf("%d is a prime number\n", iValue);
    }
    else
    {
        printf("%d is not prime number\n", iValue);
    }
    return 0;
}


/*
Time complexity : for prime
Time complexity : for non-prime number - either 1 or 2


*/ 