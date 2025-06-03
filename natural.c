#include <stdio.h>
int sumOfNaturalNumbers(int n);
int main() {
    printf("\n\n**** C Program to Calculate the Sum of the First 20 Natural Numbers Using Recursion ****\n");
    printf("Name: Shirsha Basak, Class MCA1B, Roll-37\n\n");
    int sum = sumOfNaturalNumbers(20);
    printf("The sum of the first 20 natural numbers is: %d\n", sum);
    return 0;
}
int sumOfNaturalNumbers(int n) {
    if (n == 1)
        return 1;
    else
        return n + sumOfNaturalNumbers(n - 1);
}
