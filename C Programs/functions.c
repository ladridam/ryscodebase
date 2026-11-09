//introduction to functions
//function to convert fahrenheit to celcius
#include<stdio.h>
float toCelcius(float Fahrenheit){
    return (5.0/9.0)*(Fahrenheit - 32.0);
}
int main (){
    float f_value = 67.8;
    float result = toCelcius(f_value);
    printf("Fahrenheit: %.2f\n", f_value);
    printf("Celcius: %.2f\n", result);
    return 0;
}
