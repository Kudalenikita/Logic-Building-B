//Program to print 5 times “Marvellous” on screen.
#include <stdio.h>

void Display() 
{
    int i = 0;
    for (i = 1; i <= 5; i++) 
    { 
        // Loop runs 5 times
        printf("Marvellous\n"); // Print "Marvellous" each time
    }
}

int main()
{
    Display(); // Call the Display function
    return 0;
}