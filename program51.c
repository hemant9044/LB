// kind of reverse number
#include<stdio.h>

int main()
{
    int iNo = 78945, iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo /10;
    }

    return 0;
}