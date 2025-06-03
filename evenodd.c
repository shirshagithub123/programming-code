#include <stdio.h>
int isEven(int num);
int main() {
    int num;
    printf("\n\n**** C Program to Check Whether a Number is Even or Odd Using Functions  ****\n");
    printf("Name: Shirsha Basak, Class MCA1B, Roll-37\n\n");
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (isEven(num))
        printf("The number %d is Even.\n", num);
    else
        printf("The number %d is Odd.\n", num);
    return 0;
}
int isEven(int num) {
    return num % 2 == 0;
}
