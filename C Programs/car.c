#include<stdio.h>
#include<string.h>
struct car
{
    /* data */
    char model[50];
    char brand[50];
    int year;
};
int main (){
    struct car car1={"BMW", "X5", 1999};
    struct car car2={"Ford", "Mustang", 1969};
    struct car car3={"Toyota", "Corolla", 2011};
    
    printf("%s %s %d\n", car1.model, car1.brand, car1.year);
    printf("%s %s %d\n", car2.model, car2.brand, car2.year);
    printf("%s %s %d\n", car3.model, car3.brand, car3.year);
    return 0;

}