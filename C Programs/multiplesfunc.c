#include<stdio.h>
int multipleCounter(int num, int start, int end){
    int count = 0;
    for(int i = start; i <= end; i++){
        if(i%num==0){
            count++;
        }
        
    }
    return count;
}
int main (){
    int num;
    printf("Enter the number to find its multiples: \n");
    scanf("%d", &num);
    
    int start, end;
    printf("Enter the range (start)(end): \n");
    scanf("%d %d", &start, &end);
    
    int count = multipleCounter(num, start, end);
    printf("Number of multiples of %d between %d and %d is: %d\n", num, start, end, count);
    return 0;
}