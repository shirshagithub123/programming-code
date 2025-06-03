#include <stdio.h>

// Define the structure for complex numbers
typedef struct {
    float real;
    float imag;
} complex;

// Function to add two complex numbers
complex addComplex(complex c1, complex c2) {
    complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
complex subtractComplex(complex c1, complex c2) {
    complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

int main() {
    complex c1, c2, sum, difference;

    // Input two complex numbers
    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    // Perform addition and subtraction
    sum = addComplex(c1, c2);
    difference = subtractComplex(c1, c2);

    // Display the results
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Difference: %.2f + %.2fi\n", difference.real, difference.imag);

    return 0;
}
