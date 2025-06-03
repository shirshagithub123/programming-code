#include <stdio.h> 
int main() { 
  int numl, num2, num3;  
  printf("\n\n****C program to find the maximum between three numbers*****\n"); 
  printf("\n***Name-Shirsha Basak,MCA_1B,Roll-37***\n");
  printf("Enter three integers: "); 
  scanf("%d %d %d", &numl, &num2, &num3); 
  if (numl >= num2 && numl >= num3) { 
    printf("The maximum number is: %d\n", numl); 
  } else if (num2 >= numl && num2 >= num3) { 
    printf("The maximum number is: %d\n", num2); 
  } else { 
    printf("The maximum number is: %d\n", num3); 
  }
  return 0; 
}