/*
step 1 : understand the problem statement
step 2 : write algorithm
step 3 : Decide programimg language
step 4 : write the program
step 5 : test the program 
*/

/*
    Problem statement :
    write a program which is used to perform Addition of two numbers.
*/
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

int main()
{
    float fNo1 = 0.0f, fNo2 = 0.0f, fAns = 0.0f;

    printf("Enter First Number : \n");
    scanf("%f",&fNo1);

    printf("Enter second Number : \n");
    scanf("%f",&fNo2);

    fAns = fNo1 + fNo2;

    printf("Addition is : %f\n",fAns);

    return 0;
}