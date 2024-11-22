//Program to print 5 to 1 numbers on screen.
#include <stdio.h>

void Display() {
    int i = 5;

    while (i >= 1) { // Loop runs while i is 5 to 1
        printf("%d\n", i); // Print the current value of i
        i--; // Decrement i
    }
}

int main() {
    Display(); // Call the Display function

    return 0;

}