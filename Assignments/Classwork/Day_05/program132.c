#include<stdio.h>
#include<stdlib.h>     // malloc and free

int Average(int Arr[], int iSize)
{
    int iCnt = 0,iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
         iSum = iSum + Arr[iCnt];
    }
    return (iSum / (float)iSize);    
}

int main()
{
    int ilength = 0, iCnt = 0;
    float fRet = 0.0f;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&ilength);

    ptr = (int *)malloc(ilength * sizeof(int));
    if(NULL == ptr)     // Industrial way of coding
    {
        printf("Unable to allocate the memory\n");
        return-1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
       scanf("%d",&ptr[iCnt]);
    }

    fRet = Average(ptr,ilength);

    printf("Number of Average elements is : %d\n",fRet);

    free(ptr);

    return 0;
}