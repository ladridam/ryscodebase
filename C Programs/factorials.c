#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n){
    if (n==0||n==1)
    {
        return 1;
    }else{
        return n*factorial(n-1); //CALCULATING FACTORIALS RECURSIVELY
    }
}
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if(num>=0)
    {
        printf("Factorial of %d : %d", num, factorial(num));
    }else{
        printf("Undefined");
    }
    return 0;
}