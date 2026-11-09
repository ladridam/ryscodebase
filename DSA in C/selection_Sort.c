#include<stdio.h>
int SelectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int min_idx = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[min_idx])
            {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }    
}

void Print(int arr[], int n){
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(){
    int arr[] = {45,16,88,23,1,90,34};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Original Array: ");
    Print(arr, n);
    
    SelectionSort(arr, n);
    
    printf("Sorted Array: ");
    Print(arr, n);
    return 0;
}