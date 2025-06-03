#include <stdio.h>
#include <math.h>
int isPrime(int num);
int isArmstrong(int num);
int isPerfect(int num);
int main() {
    int num;
    printf("\n\n**** C Program to Check Whether a Number is Prime, Armstrong, or Perfect Using Functions ****\n");
    printf("Name: Shirsha Basak, Class MCA1B, Roll-37\n\n");
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (isPrime(num))
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is not a Prime number.\n", num);
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    if (isPerfect(num))
        printf("%d is a Perfect number.\n", num);
    else
        printf("%d is not a Perfect number.\n", num);

    return 0;
}
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
int isArmstrong(int num) {
    int sum = 0, originalNum = num, remainder, digits = 0;

    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += pow(remainder, digits);
        originalNum /= 10;
    }
    return sum == num;
}
int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }
    return sum == num;
}
