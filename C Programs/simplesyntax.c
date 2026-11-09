#include<stdio.h>
#include<string.h>
struct simplesyntax
{
    /* data */
    int Num;
    char Letter;
    char String[30];
};
int main (){
    struct simplesyntax s1 ={19, 'R', "ANY TEXT"};
    printf("%d %c %s", s1.Num, s1.Letter, s1.String);
    return 0;
}