
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;

// O(N)
bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo )
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int ilength = 0, iCnt = 0, iValue = 0;
    bool bRet = false;
    IPTR iPtr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&ilength);

    // Step 1 : To allocate the memory
    iPtr = (IPTR)malloc(ilength * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the values : \n");

    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    printf("Enter the number to search frequency : \n");
    scanf("%d",&iValue);

    //Step 2: Use the memmory
    bRet = LinearSearch(iPtr,iValue,ilength);

    if(bRet == true)
    {
         printf("%d is present in data \n", iValue);
    }
    else
    {
        printf("%d is  not present in data \n", iValue);
    }
 

    // Step 3 : Free the memmory

    free(iPtr);

    return 0;
}