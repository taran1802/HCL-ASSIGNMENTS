#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;         
    int size;          
    int length;      

    
    printf("Enter the maximum size of the string: ");
    scanf("%d", &size);
    
  
    str = (char *)malloc(size * sizeof(char) + 1);
    
    
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;  
    }

    
    getchar(); 

    printf("Enter the string: ");
    fgets(str, size + 1, stdin);

   
    length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

   
    printf("You entered: %s\n", str);

    free(str);

    return 0;
}

