#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    if (argc < 2) {
        printf("Usage: %s <int1> <int2> ... <intN>\n", argv[0]);
        return 1;
    }

    
    int sum = 0;
    int count = argc - 1; 

    
    for (int i = 1; i < argc; i++) {
        int num = atoi(argv[i]);
        sum += num;
    }

    
    if (count > 0) {
        double average = (double)sum / count;
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", average);
    } else {
        printf("No integers provided.\n");
    }

    return 0;
}


