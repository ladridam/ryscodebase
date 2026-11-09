#include<stdio.h>
int count(int num){
    return (num == 0)? 0 : 1+count(num/10);
}
int main(){
    int num;
    scanf("%d", &num);
    int result = count(num);
    (num==0)? printf("Digit: %d", result) : printf("Digit: %d", result);
    return 0;
}