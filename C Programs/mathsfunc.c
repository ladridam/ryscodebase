//math.h header file
#include<stdio.h>
#include<math.h>
int main(){
    //sqrt is for square root func
    printf("%f\n", sqrt(16));
    //ceil rounds off number to the nearest greatest integer
    printf("%f\n", ceil(1.4));
    //floor rounds off number to the nearest lowest integer
    printf("%f\n", floor(1.4));
    //pow is the power function, x^y
    printf("%f\n", pow(3,4));
    //abs is for absolute value
    //sin(x) returns the sine of x
    printf("%f\n", sin(60));
    //cbrt returns cube root
    printf("%f\n", cbrt(55));
    //exp returns the value of e^x
    printf("%f\n", exp(3));
    //acos returns the value of arcsine
    printf("%f\n", acos(1));
    return 0;
}