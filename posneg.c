#include <stdio.h>
int main() { 
  int number;  
  printf("\n\n****C program to check whether a number is negative, positive, or zero****\n");
  printf("\n***Name-Shirsha Basak,MCA_1B,Roll-37***\n");
  printf("Enter an integer: "); 
  scanf("%d", &number); 
  if (number > 0) { 
    printf("%d is a positive number.\n", number); 
  } else if (number< 0) { 
    printf("%d is a negative number.\n", number); 
  } else { 
    printf("The number is zero.\n"); 
  }  
return 0;
} 
