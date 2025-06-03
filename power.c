#include <stdio.h>
int power(int base, int exp);
int main() {
    int base, exp;
    printf("\n\n**** C Program to Find the Power of Any Number Using Recursion ****\n");
    printf("Name: Shirsha Basak, Class MCA1B, Roll-37\n\n");
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    printf("%d^%d = %d\n", base, exp, power(base, exp));

    return 0;
}
int power(int base, int exp) {
    if (exp == 0)
        return 1;
    else
        return base * power(base, exp - 1);
}
