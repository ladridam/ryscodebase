#include<stdio.h>
int sum(int arr[], int size){
    return (size <= 0)? 0 : arr[size - 1] + sum(arr, size - 1);
}
int main(){
    int arr[] = {9};
    int result = sum(arr, 1);
    printf("Sum: %d", result);
    return 0;
}