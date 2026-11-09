#include<stdio.h>
void EvenOdd(int num);

int main (){
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    EvenOdd(num);
    return 0;
}

void EvenOdd(int num){
    if(num%2==0){
        printf("%d is an even number\n", num);
    }else{
        printf("%d is an odd number\n", num);
    }
}