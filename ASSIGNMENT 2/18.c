#include <stdio.h>

int main(int argc, char *argv[]) {
    
    const int EXPECTED_ARGS = 3; 

    
    if (argc != EXPECTED_ARGS) {
        printf("Error: Incorrect number of arguments.\n");
        printf("Usage: %s <arg1> <arg2>\n", argv[0]);
        return 1; 
    }

    
    printf("Correct number of arguments provided.\n");
    printf("Argument 1: %s\n", argv[1]);
    printf("Argument 2: %s\n", argv[2]);

    return 0;
}

