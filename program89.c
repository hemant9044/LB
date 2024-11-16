#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0 ,iFrequency = 0 , iNo = 0;

    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] ) == iNo)
        {
            iFrequency++;
        }
        
        
    }
    return iFrequency;
    
    
}

int main()
{
    int *ptr = NULL;
    int iLength = 0 ,iCnt = 0, iRet = 0, iValue = 0;

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
    printf("Enter the no you want to search : \n");
    scanf("%d",&iValue);
    iRet = Frequency(ptr,iValue);
    printf("Frequency of no. is : %d\n",iRet);

    

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