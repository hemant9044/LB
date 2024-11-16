
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
/*
STEP 5
C:\Users\Asus\OneDrive\Desktop\LB>myexe
testcase 1
Enter First Number :
20.0
Enter second Number :
30.0
Addition is : 50.000000

testcase 2
C:\Users\Asus\OneDrive\Desktop\LB>myexe
Enter First Number :
-10
Enter second Number :
20
Addition is : 30.000000

testcase 3
C:\Users\Asus\OneDrive\Desktop\LB>myexe
Enter First Number :
20
Enter second Number :
-10
Addition is : 30.000000

*/