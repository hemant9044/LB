#include<stdio.h>

int main()
{

    int Arr[4] ;
    int iCnt = 0;
    int iSum = 0;
     
    printf("Please enter the values : \n");
    
    for(int iCnt = 0 ; iCnt<4 ; iCnt++)
    {

        scanf("%d",&Arr[iCnt]);
    }
    
   // iSum = Arr[0] + Arr[1] + Arr[2] + Arr[3];
 //  printf("Addition of array are : %d\n",iSum);

  for(int iCnt = 0 ; iCnt<4 ; iCnt++)
   {

        iSum = iSum + Arr[iCnt];
    }
    printf("Addition is %d\n",iSum);

    return 0;
    
    
    
}