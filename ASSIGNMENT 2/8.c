#include <stdio.h>


int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    
    int (*operation)(int, int);
    float (*operation_float)(int, int);

    int choice;
    int num1, num2;
    int result_int;
    float result_float;

   
    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

   
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    
    switch (choice) {
        case 1:
            operation = add;
            result_int = operation(num1, num2);
            printf("Result of addition: %d\n", result_int);
            break;
        case 2:
            operation = subtract;
            result_int = operation(num1, num2);
            printf("Result of subtraction: %d\n", result_int);
            break;
        case 3:
            operation = multiply;
            result_int = operation(num1, num2);
            printf("Result of multiplication: %d\n", result_int);
            break;
        case 4:
            if (num2 != 0) {
                operation_float = divide;
                result_float = operation_float(num1, num2);
                printf("Result of division: %.2f\n", result_float);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}


int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}

