#include <stdio.h>

int findDuplicates(int arr[], int size) {
    int i, j, count = 0;
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("Duplicate element: %d\n", arr[i]);
                count++;
            }
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int duplicateCount = findDuplicates(arr, size);
    printf("Number of duplicate elements: %d\n", duplicateCount);
    return 0;
}
