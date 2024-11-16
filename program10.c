/*
  step 1 : understand the problem statement
  user is going to enter the data in decimal format
  if entered data is negative we have to convert it to positive value
*/
/*
  step 2 : write algorithm

  START
    accespt first input
    Accept second input
    If any of the input is negative convert it to positive
    perform the addition of accepted value
    Display the addition
  STOP
*/
/*
  Step 3 : Decide programmi g language.
  According to the problem statement we select c programming.
*/
/*
  Step 4 : Write the program
*/

#include<stdio.h>
//////////////////////////////////////////////////////////////////////
//  Function Name : addition
//  Description :   It is used to perform addition of two float values
//  Input :         float , float
//  Output :        float 
//  author :        Hemant vijay Patil
//  Date :          06/10/2024
//
///////////////////////////////////////////////////////////////////

float Addition(float fValue1, float fValue2)
{
    float fAdd = 0.0f;                        //Local variable for result

    if(fValue1 < 0.0f) //updater
    {
        fValue1 = -fValue1;
    }

    if(fValue2 < 0.0f)  //updater
    {
        fValue2 = -fValue2;
    }
    fAdd = fValue1 + fValue2;                 //Business logic
    return fAdd;
}
//////////////////////////////////////////////////////////////////
///
//   This application is used to perform addition of two numbers
//
/////////////////////////////////////////////////////////////////

int main()
{
    float fNo1 = 0.0f, fNo2 = 0.0f, fAns = 0.0f; // Local Variable for Input

    printf("Enter First Number : \n");
    scanf("%f",&fNo1);

    printf("Enter second Number : \n");
    scanf("%f",&fNo2);

    fAns = Addition(fNo1, fNo2);               // Function

    printf("Addition is : %f\n",fAns);

    return 0;
}