#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0;

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
    //Function call

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