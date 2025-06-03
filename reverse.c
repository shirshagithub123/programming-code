#include <stdio.h>
void reverseNumber(int num);
int main() {
    int num;
    printf("\n\n**** C Program to Reverse an Integer Using Recursion ****\n");
    printf("Name: Shirsha Basak, Class MCA1B, Roll-37\n\n");
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Reversed number: ");
    reverseNumber(num);
    printf("\n");

    return 0;
}
void reverseNumber(int num) {
    if (num == 0)
        return;
    printf("%d", num % 10);
    reverseNumber(num / 10);
}
