#include<stdio.h>
#include<stdlib.h>     // malloc and free

int Summation(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int ilength = 0, iCnt = 0, iRet = 0;
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

    iRet = Summation(ptr,ilength);

    printf("Addition is : %d\n",iRet);

    free(ptr);

    return 0;
}