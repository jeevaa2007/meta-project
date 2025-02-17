#include<stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    ;
    return 0;
}

