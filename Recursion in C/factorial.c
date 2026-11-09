#include<stdio.h>
int factorial(int n){
    return (n==0 || n==1)? 1 : n*factorial(n-1);
}
int main(){
    int num;
    scanf("%d", &num);
    printf("%d", factorial(num));
}