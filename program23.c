#include<stdio.h>
void DisplayTimeTable(int iStd)
{
    switch(iStd)
    {
        case 8:
        printf("Your exam is at 9.30 AM\n");
        break;
        

        case 9:
        printf("Your exam is at 10.30 AM\n");
        break;

        case 10:
        printf("Your exam is at 11.30 AM\n");
        break;

        default :
        printf("nit tak re paper 8 9 10 chay");
    }
}
int main()
{
    int iValue = 0;

    printf("Please enter your standard : \n");
    scanf("%d",&iValue);

    DisplayTimeTable(iValue);

    return 0;
}