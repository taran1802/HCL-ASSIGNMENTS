#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;       
    int size;      

  
    printf("Enter the number of elements: ");
    scanf("%d", &size);

   
    arr = (int *)malloc(size * sizeof(int));
    
   
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;  
    }

    
    for (int i = 0; i < size; i++) {
        arr[i] = i * 10; 
    }

  
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    free(arr);

    return 0;
}

