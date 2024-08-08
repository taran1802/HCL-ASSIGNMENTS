#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};  
    int *ptr = arr;               
    int size = sizeof(arr) / sizeof(arr[0]);  
    int sum = 0;                  

   
    for (int i = 0; i < size; i++) {
        sum += *(ptr + i);  
    }

    
    printf("Sum of array elements: %d\n", sum);

    return 0;
}

