#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iSize)
{
    int iAvg = 0, iCnt = 0,iSum = 0;

    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        iAvg = (iSum + Arr[iCnt])/iSize;
    }
    return iAvg;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0 ,iCnt = 0, fRet = 0;

   

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);
   
    ptr = (int *)malloc(iLength * sizeof(int));

    
    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    fRet = Average(ptr,iLength);
    printf("Average is : %d\n",fRet);

    
    free(ptr);

    
    return 0;
}

/*
   step 1 : Accept the number of elements from user
   step 2 : Allocate that memory dynamically
   step 3 : Accept the values and store into dynamic memory
   step 4 : Perform the operations (Logic)
   step 5 : Deaalocate that Memory
*/