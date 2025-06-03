#include <stdio.h>
int findMax(int a, int b);
int findMin(int a, int b);
int main() {
    int num1, num2;
    printf("\n\n**** C Program to Find the Maximum and Minimum Between Two Numbers Using Functions ****\n");
    printf("Name: Shirsha Basak, Class MCA1B, Roll-37\n\n");
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Maximum: %d\n", findMax(num1, num2));
    printf("Minimum: %d\n", findMin(num1, num2));
    return 0;
}
int findMax(int a, int b) {
    return (a > b) ? a : b;
}
int findMin(int a, int b) {
    return (a < b) ? a : b;
}
