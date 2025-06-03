#include <stdio.h>
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int main() {
    int num1, num2;
    printf("\n\n**** C Program to Add, Subtract, Multiply, and Divide Two Integers Using a User-Defined Type Function with Return Type ****\n");
    printf("Name: Shirsha Basak, Class MCA1B, Roll-37\n\n");
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Addition: %d\n", add(num1, num2));
    printf("Subtraction: %d\n", subtract(num1, num2));
    printf("Multiplication: %d\n", multiply(num1, num2));

    if (num2 != 0) {
        printf("Division: %.2f\n", divide(num1, num2));
    } else {
        printf("Division by zero is not possible.\n");
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
