#include <stdio.h>
void swapByValue(int a, int b);
void swapByReference(int *a, int *b);
int main() {
    int num1, num2;
    printf("\n\n**** C Program to Swap Two Integers Using Call-by-Value and Call-by-Reference ****\n");
    printf("Name: Shirsha Basak, Class MCA1B, Roll-37\n\n");
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping (By Value): num1 = %d, num2 = %d\n", num1, num2);
    swapByValue(num1, num2);
    printf("After swapping (By Value): num1 = %d, num2 = %d\n", num1, num2);

    printf("\nBefore swapping (By Reference): num1 = %d, num2 = %d\n", num1, num2);
    swapByReference(&num1, &num2);
    printf("After swapping (By Reference): num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
