#include <stdio.h>
#include <math.h>

int main() {
    int n, decimal = 0;
    printf("Enter the number of bits in the binary number: ");
    scanf("%d", &n);

    int binary[n];
    printf("Enter the binary number: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &binary[i]);
    }

    for (int i = 0; i < n; i++) {
        decimal += binary[i] * pow(2, n - 1 - i);
    }

    printf("Decimal representation: %d\n", decimal);

    return 0;
}