#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    
    if (argc < 2) {
        printf("Usage: %s <string1> <string2> ... <stringN>\n", argv[0]);
        return 1; 
    }

    
    int total_length = 0;
    for (int i = 1; i < argc; i++) {
        total_length += strlen(argv[i]);
    }

    
    char *concatenated = (char *)malloc(total_length + 1);
    if (concatenated == NULL) {
        printf("Memory allocation failed\n");
        return 1; 
    }

    
    concatenated[0] = '\0';

  
    for (int i = 1; i < argc; i++) {
        strcat(concatenated, argv[i]);
    }

    
    printf("Concatenated string: %s\n", concatenated);

    
    free(concatenated);

    return 0;
}

