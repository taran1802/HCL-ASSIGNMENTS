#include <stdio.h>

// Function that adds two integers
int add(int a, int b) {
    return a + b;
}

int main() {
   
    int (*func_ptr)(int, int) = add;
    
    int num1 = 5;
    int num2 = 7;
    int result;

    
    result = func_ptr(num1, num2);


    printf("The sum of %d and %d is %d\n", num1, num2, result);

    return 0;
}

