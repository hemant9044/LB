/*
    Start
       Accept the total mark
       Accept the obtained mark
       calculate the percentage as
       Display the calculated percentage
    Stop
*/

/*#include<stdio.h>
float CalculatePercentage(int iMarksobtained , int iTotalMark)
{
    int percentage = 0;
    iPercentage = (iMarkobtained * 100 / iTotalMark);
    return = iPercentage;
}

int main()
{
    int iMarkgot = 0;
    int iTotal = 0;

    printf("Enter Marks Obtained\n");
    scanf("%d",&iMarkgot);

    printf("Enter Marks total\n");
    scanf("%d",&iTotal);

    iResult = CalculatePercentage(iMarkgot , iTotal);

    printf(" Your Percentage is : %d\n",fResult);


    return 0;
}*/
#include<stdio.h>

float CalculatePercentage(int iObtained, int iTotal)
{
    float fPercentage = 0.0f;
    fPercentage = (iObtained/iTotal) * 100; //typecasting as without float answer will be zero

    return fPercentage;

}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fResult = 0.0f;

    printf("Please enter obtained marks in your exam : \n");
    scanf("%d",&iValue1);

    printf("Please enter total marks in your exam : \n");
    scanf("%d",&iValue2); 
+
    fResult = CalculatePercentage(iValue1, iValue2);

    printf("Your percentage is : %f\n",fResult);

    return 0;


}