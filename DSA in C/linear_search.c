#include<stdio.h>
#include<conio.h>
int linearSearch(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
       if (arr[i]==key)
       {
        return 1;
       }
    }
    return 0;
}
int main(){
    int arr[]={1,36,89,2352,895,235};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int k = 0; k < size; k++)
    {
        printf("%d\t", arr[k]);
    }
    
    printf("\nSelect an element: ");
    int key;
    scanf("%d", &key);
    printf("\nElement selected: %d\n", key);
    
    int result = linearSearch(arr, size, key);
    if (result>0)
    {
        printf("ELement %d is found", key);
    }else{
        printf("Element %d is not found", key);
    }
    return 0;
    getch();
}