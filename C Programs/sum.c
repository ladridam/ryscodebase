#include<stdio.h>
int sumf(int, int);
int main(){
    int sum;
    sum = sumf(10, 9);
    printf("Sum:%d" , sum);
    return 0;
}
int sumf(int x, int y){
    return x+y;
}