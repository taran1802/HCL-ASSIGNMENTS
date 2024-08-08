#include <stdio.h>


void reverseArray(int *arr, int size) {
    int *start = arr;           
    int *end = arr + size - 1; 
    int temp;

    while (start < end) {
       
        temp = *start;
        *start = *end;
        *end = temp;

       
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  
    int size = sizeof(arr) / sizeof(arr[0]);  

    
    printf("Array before reversing:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

   
    reverseArray(arr, size);

    
    printf("Array after reversing:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

