/*
    Start 
     Accept % from user
     If percentage are less than 40 then display Fail
     And if it is greater than or equqal to 4o then pass
*/

#include<stdio.h>

void DisplayResult(float fPercentage)
{
    if(fPercentage < 0.0f || fPercentage > 100.0f) //filter
    {
        printf("Invalid Percentage . Please enter in the range 0 to 100\n");
        return; //it will help to close the program and otherwise it will go ahead in the program
    }
    if(fPercentage >=40.00f)
    {
        printf("You are Pass\n");
    }
    else
    {
        printf("YOU are Fail\n");
    }
}
int main()
{
    float fValue = 0.0f;

    printf("Enter the percentage : \n");
    scanf("%f",&fValue);

    DisplayResult(fValue);


    return 0;
}
