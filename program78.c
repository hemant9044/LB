#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[], int iSize);
{
   
   int iSum = 0; iCnt = 0;
   for(iCnt = 0; icnt < iSize; iCnt++)
   {
    iSum = iSum + 
   }

}

int main()
{
    int iLength = 0; iCnt = 0; iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    //use
    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Addition(ptr,iLength);
    printf("Addition is :%d",iRet);

    free(ptr);
    return 0;;


return 0;
}
