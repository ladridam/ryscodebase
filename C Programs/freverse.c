#include<stdio.h>
int reverseInt(int num){
    int rev=0;
    while (num!=0)
    {
        rev=(rev*10)+(num%10);
        num /=10;
    }
    return rev;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reversed = reverseInt(num);
    printf("Reverse digits of %d is %d", num, reversed);
    return 0;
}