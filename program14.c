#include<stdio.h>

float CalculatePercentage(int iObtained, int iTotal)
{
    float fPercentage = 0.0f;
    fPercentage = ((float)iObtained/(float)iTotal) * 100; //typecasting as without float answer will be zero
    
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