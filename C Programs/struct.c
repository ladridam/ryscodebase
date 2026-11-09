#include<stdio.h>
#include<string.h>
//creating structure called mystructure
struct myStructure
{
    /* data */
    int myNum;
    char myLetter;
    char myString[30];
};
int main (){
    //creating a structure variable of myStructure as s1
    struct myStructure s1;
    //assigning values to the member of s1
    s1.myNum=19;
    s1.myLetter='R';
    strcpy(s1.myString, "ANY TEXT"); //to print string, we need "strcpy"
    //print values
    printf("My age:%d and my Letter is%c\n", s1.myNum, s1.myLetter);
    printf("String:%s", s1.myString);
    return 0;
}