#include <stdio.h>
void palindrome(int n)
{
    int temp = n;
    int rev = 0;
    int remainder;
    while (temp != 0)
    {
        remainder = temp % 10;
        rev = rev * 10 + remainder;
        temp /= 10;
    }
    if (rev == n)
    {
        printf("%d is a palindrome\n", n);
    }
    else
    {
        printf("%d is not a palindrome\n", n);
    }
}

int main()
{
    int number;
    printf("Enter a 4 digit number = ");
    scanf("%d", &number);
    palindrome(number);
    return 0;
}