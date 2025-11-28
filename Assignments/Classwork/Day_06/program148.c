#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

void Update(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        Arr[iCnt]++;
    }
}

int main()
{
    int ilength = 0, iCnt = 0;
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


    //Step 2: Use the memmory
    Update(iPtr,ilength);

    printf("Updated data from array is : ")
    
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        printf("%d\n",iPtr[iCnt]);
    }
   
    

    // Step 3 : Free the memmory

    free(iPtr);

    return 0;
}