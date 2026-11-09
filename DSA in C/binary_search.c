#include<stdio.h>

int binarySearch(int arr[], int low, int high, int key){
    while (low <= high)
    {
        int mid = low + (high - low)/2;
        if(arr[mid]==key)
            return mid;
        if(arr[mid]<key)
            low = mid+1;
        else
            high = mid-1;
    }
    return -1;
}

int main(){
    int arr[]={2,5,7,9,12,14,15};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 14;
    int result = binarySearch(arr, 0, size-1, key);
    if (result!=-1)
    {
        printf("Element found");
    }else{
        printf("Element not found");
    }
    return 0;
}