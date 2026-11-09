/*sum of two numbers using functions*/
#include<stdio.h>
int sumf(int a, int b)
{
    //code
    int sum;
    sum=a+b;
    return sum;
};
int main(){
    int a,b;
    int sumf(int, int);
    printf("Enter two numbers");
    scanf("%d%d", &a, &b);
    printf("\n Sum:%d", sumf(a,b));
    return 0;
}
