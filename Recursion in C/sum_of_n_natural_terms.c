#include<stdio.h>
int sum(int n){
    return (n==0)? n : n+(sum(n-1));    
}
int main(){
    int num;
    scanf( "%d",&num);
    printf("%d", sum(num));
    return 0;
}