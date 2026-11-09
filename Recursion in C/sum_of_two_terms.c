#include<stdio.h>
int sum(int a, int b){
    return (b==0)? a : sum(a+1, b-1);
}
int main (){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", sum(a,b));
    return 0;
}