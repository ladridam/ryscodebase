#include<stdio.h>
int primeCheck(int num){
    int counter=0;
    for (int i = 1; i <=num; i++)
    {
        if(num%i==0){
            counter++;
        }
    }
    return counter;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int result = primeCheck(num);
    if (result==2)
    {
        printf("%d is a prime number", num);
    } else {
        printf("%d is not a prime number", num);
    }
    return 0;
}