#include<stdio.h>

void Display(int *ptr)
{
    printf("%d\n",ptr[0]); //*(ptr+0)
    
    printf("%d\n",ptr[1]);//*(ptr+1)
    
    printf("%d\n",ptr[2]);//*(ptr+2)

    printf("%d\n",ptr[3]);//*(ptr+3)
    
}

int main()
{

    int Arr[4] ;
    int iCnt = 0;
    
     
    printf("Please enter the values : \n");
    
    for(int iCnt = 0 ; iCnt<4 ; iCnt++)
    {

        scanf("%d",&Arr[iCnt]);
    }
    
   Display(Arr);   // Display(100);

   return 0;
    
    
    
}