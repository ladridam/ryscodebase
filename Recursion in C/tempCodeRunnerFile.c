#include<stdio.h>
int fib(int n){
    return (n>1)? fib(n-1)+fib(n-2) : ((n>0)? 1:0);
}
int main(){
    int term;
    scanf("%d", &term);
    printf("%d", fib(term));
    return 0;
}