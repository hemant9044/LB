#include<stdio.h>
#include<stdlib.h>

int Countodd(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 1)
        {
            iCount++;
        }
        
    }
    return iCount;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0 ,iCnt = 0, iRet = 0;

    //step 1 : Accept the number of elements from user

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);
   //step 2 : Allocate that memory dynamically
    ptr = (int *)malloc(iLength * sizeof(int));

    //step 3 : Accept the values and store into dynamic memory
    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    //step 4 : Perform the operations (Logic)
    iRet = Countodd(ptr,iLength);
    printf("count is : %d\n",iRet);

    //step 5 : Deaalocate that Memory
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