#include <stdio.h> 
int main() { 
  float a, b, x, result; 
  printf("\n\n****C program to evaluate the algebraic expression (ax+b)/(ax-b)****\n"); 
  printf("\n****Name-Shirsha Basak,MCA_1B,Roll-37****\n");
  printf("Enter the values of a, b, and x: "); 
  scanf("%f %f %f",&a, &b, &x); 
  // Check if the denominator is zero 
  if (a* x - b == 0)
  {
    printf("Error: Division by zero is not allowed.\n"); 
  } 
  else 
  {  
  result = (a *x + b) / (a * x - b); 
    printf("The result of the expression (ax+b)/(ax-b) is: %.2f\n", result); 
  }
return 0; 
}
