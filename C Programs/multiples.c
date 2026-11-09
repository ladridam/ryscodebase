#include<stdio.h>

int main() {
    int num;
    printf("Enter the number: \n");
    scanf("%d", &num);
    
    int start, end;
    printf("Enter range [start][end]: \n");
    scanf("%d %d", &start, &end);
    
    int count = 0;
    for (int i = num; i <= end; i++) {
        count++;
    }
    
    printf("%d\n", count);
    return 0;
}
