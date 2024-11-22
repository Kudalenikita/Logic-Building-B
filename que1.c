//.Program to divide two numbers
#include <stdio.h>

int Divide(int iNo1, int iNo2) 
{
    int iAns = 0;

    if (iNo2 == 0)
    {// Check for division by zero
        return -1;   // Return -1 if divisor is zero
    }

    iAns = iNo1 / iNo2;

    return iAns; // Return the result of the division
}

int main() 
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2); // Call the Divide function

    if (iRet == -1)
    {
        printf("Division by zero error.\n");
    } else
     {
        printf("Division is %d\n", iRet); // Print the result
    }
    
    return 0;
}