#include<stdio.h>
int palindromeCheck(int num){
    int num_copy = num, rev = 0;
    while (num_copy!=0)
    {
        rev=(rev*10)+(num_copy%10);
        num_copy /=10;
    }
    if(num==rev)
        return 1;
    else
        return 0;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int check = palindromeCheck(num);
    if(check){
        printf("%d is a palindrome", num);
    }else{
        printf("%d is not a palindrome", num);
    }
    return 0;
}