//Accept one number from user and print that number of * on screen.
#include <stdio.h>

void Accept(int iNo) 
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++) 
    { // Loop runs iNo times
        printf("*"); // Print an asterisk each time
    }

    printf("\n"); // Print a new line after the loop
}

int main() 
{
    int iValue = 0;

    printf("Enter the number of asterisks to print: ");
    scanf("%d", &iValue);

    Accept(iValue); // Call the Accept function

    return 0;


}