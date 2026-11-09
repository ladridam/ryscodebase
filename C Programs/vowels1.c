#include<stdio.h>
#include<string.h>
//function to count vowels
int countVowels(char *str){
    int count = 0;
    for ( int i = 0; str[i]!='\0'; i++){
        if (str[i]=='a' || str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
        {
            /* code */
            count++;
        }      
    }
    return count;
    }
int main (){
    char str [100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if(str[strlen(str)-1]=='\n'){
        str[strlen(str)-1]='\0';
    }
    int vowelcount = countVowels(str);
    printf("Number of vowels:%d", vowelcount);
    return 0;
}