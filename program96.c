#include<stdio.h>
#include<stdlib.h>

int ReverseDisplay(int Arr[], int iSize)
{
    int iCnt = 0;
    

    for(iCnt = iSize-1; iCnt >=0; iCnt--)
    {
        printf("%d\n",Arr[iCnt]);
    }
    
}

int main()
{
    int *ptr = NULL;
    int iLength = 0 ,iCnt = 0, iRet = 0;

    

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);
   
    ptr = (int *)malloc(iLength * sizeof(int));

    
    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = ReverseDisplay(ptr,iLength);
   

    
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