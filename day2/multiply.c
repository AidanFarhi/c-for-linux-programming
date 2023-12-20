#include <stdio.h>

/*
Program to cacluate the product of two numbers
Author: th3_h3br3w_hack3r
Version: 0.1
*/

// Variables for later use in the program
int a, b, c;

// Function prototype
int product(int x, int y);

int main(void)
{
    // Get the first number
    printf("Enter a number between 1 and 100: ");
    scanf("%d", &a);

    // Get the second number
    printf("Enter another number between 1 and 100: ");
    scanf("%d", &b);

    // Calculate and display the product
    c = product(a, b);
    printf("%d times %d = %d\n", a, b, c);

    return 0;
}

/* Returns the product of the two values */
int product(int x, int y)
{
    return (x * y);
}
