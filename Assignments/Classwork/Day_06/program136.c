
#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int FrequencyCalculate(int Arr[], int iSize,int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo )
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int ilength = 0, iCnt = 0, iRet = 0,iValue = 0;
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

    printf("Enter the number to calculate frequency : \n");
    scanf("%d",&iValue);

    //Step 2: Use the memmory
    iRet = FrequencyCalculate(iPtr,iValue);
    printf("Frequency of %d  is : %d\n",iValue,iRet);

    // Step 3 : Free the memmory

    free(iPtr);

    return 0;
}