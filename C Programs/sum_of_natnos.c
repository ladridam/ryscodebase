/*sum of all natural numbers upto a given number*/
#include<stdio.h>

int sumofNaturalNumbers(int num){
    int sum = 0;
    for (int i = 1; i <= num; i++) //i begins from 1 since the numbers we are dealing with are natural numbers
    {
        sum += i; /* it s a for loop, x+=i simply means x = x + i*/
    }
    return sum;
}
int main (){
    int n;
    //input from the user
    printf("Enter a number: ");
    scanf("%d", &n);
    //check if the number is positive integer
    if (n<0)
    {
        /* code */
        printf("Error; please enter a positive integer!");
    }else{
        int result = sumofNaturalNumbers(n);
        printf("The sum of natural numbers upto %d is: %d\n", n, result);      
        }
        return 0;
}