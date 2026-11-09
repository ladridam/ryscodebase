#include <stdio.h>
#include <string.h>

// Function to count vowels in a string
int countVowels(char *str) {
    int count = 0;
    // Iterate through each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is a vowel (both uppercase and lowercase)
        if (str[i] == 'a' || str[i] == 'A' ||
            str[i] == 'e' || str[i] == 'E' ||
            str[i] == 'i' || str[i] == 'I' ||
            str[i] == 'o' || str[i] == 'O' ||
            str[i] == 'u' || str[i] == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];

    // Input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Count vowels in the string
    int vowelCount = countVowels(str);

    // Output the result
    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}
