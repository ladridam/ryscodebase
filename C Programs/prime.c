#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    // Check if n is less than 2
    if (n < 2) {
        return false;
    }

    // Check for factors from 2 to sqrt(n)
    for (int i = 2; i * i <= n; i++) {
        // If n is divisible by any number between 2 and sqrt(n), it's not prime
        if (n % i == 0) {
            return false;
        }
    }
    // If no factors were found, n is prime
    return true;
}

int main() {
    int num;
    
    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is prime
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}
