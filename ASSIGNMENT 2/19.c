#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int is_valid_integer(const char *str) {
    
    if (str == NULL || *str == '\0') {
        return 0;
    }

  
    for (size_t i = 0; i < strlen(str); i++) {
        if (!isdigit(str[i]) && (i != 0 || str[i] != '-' || strlen(str) == 1)) {
            return 0; 
        }
    }

    return 1;
}

int main(int argc, char *argv[]) {
    
    if (argc < 2) {
        printf("Usage: %s <int1> <int2> ... <intN>\n", argv[0]);
        return 1;
    }

    
    for (int i = 1; i < argc; i++) {
        if (is_valid_integer(argv[i])) {
            printf("Argument %d is a valid integer: %s\n", i, argv[i]);
        } else {
            printf("Error: Argument %d is not a valid integer: %s\n", i, argv[i]);
            return 1; 
        }
    }

    return 0;
}

