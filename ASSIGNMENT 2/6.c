#include <stdio.h>


void findMinMax(int *arr, int size, int *min, int *max) {
    *min = *max = *arr;  

    for (int i = 1; i < size; i++) {
        if (*(arr + i) < *min) {
            *min = *(arr + i);  
        }
        if (*(arr + i) > *max) {
            *max = *(arr + i);  
        }
    }
}

int main() {
    int arr[] = {12, 45, 7, 32, 89, 54, 23};  
    int size = sizeof(arr) / sizeof(arr[0]);  
    int min, max;                           

    
    findMinMax(arr, size, &min, &max);

    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Smallest element: %d\n", min);
    printf("Largest element: %d\n", max);

    return 0;
}

