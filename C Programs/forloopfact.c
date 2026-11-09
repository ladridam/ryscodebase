#include<stdio.h>

int main() {
    int num; 
    int fact = 1;

    // Input from the user
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using a loop
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }

        // Print the factorial
        printf("Factorial of %d is %d\n", num, fact);
    }

    return 0;
}