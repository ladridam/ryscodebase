#include<stdio.h>
//selection sort
int Sort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[min])
                min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
//search algorithm - binary search
int BinarySearch(int arr[], int low, int high, int n){
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid]==n)
            return mid;
        if(arr[mid]<n)
            low = mid+1;
        else
            high = mid-1;
    }
    return -1;
}

void Print(int arr[], int n){
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// main code
int main(){
    int arr[] = {34,67,24,78,55,123};
    int size = sizeof(arr)/sizeof(arr[0]);
    char C;
    int key;
    printf("\nOriginal Array: ");
    Print(arr, size);

    printf("\nDo you want to sort the array? Y/N\n");
    scanf(" %c", &C);
    if (C=='Y' || C=='y') 
    {
        Sort(arr, size);
        printf("\nSorted Array: ");
        Print(arr, size);
    }
    printf("\nEnter the key value: ");
    scanf("%d", &key);

    printf("\nElement Selected: %d", key);
    int result = BinarySearch(arr, 0, size-1, key);
    if(result!=-1){
        printf("\nSelected Element %d is found", key);
    }else{
        printf("\nSelected Element %d is not found", key);
    }
    return 0;
}