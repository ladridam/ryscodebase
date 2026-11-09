//sum of two numbers, x & y using functions
#include<stdio.h>
//declaring the function
int Function(int, int);
//main part 
int main (){
    int result = Function(5,3);
    printf("Result: %d", result);
    return 0;
}
//definition of the function
int Function(int x, int y){
    return x+y;
}