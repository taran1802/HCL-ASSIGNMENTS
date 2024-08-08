#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    
    if (argc != 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1; 
    }

    char *str = argv[1];  
    int length = strlen(str);  

 
    printf("Original string: %s\n", str);

   
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}

