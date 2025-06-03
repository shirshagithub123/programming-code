#include <stdio.h> 
int main() {  
  int number; 
  printf("\n\n****C program to check whether a number is divisible by 5 and II or not within the range of 100 to 500****\n"); 
  printf("\n***Name-Shirsha Basak,MCA_1B,Roll-37***\n");
  printf("Enter an integer between 100 and 500: "); 
  scanf("%d", &number); 
  // Check if the number is within the specified range 
  if (number < 100 || number > 500) { 
    printf("The number is out of the specified range (100 to 500).\n",number);
  } else { 
  // Check if the number is divisible by both 5 and 11 
  if (number % 5 == 0 && number % 11 == 0) { 
    printf("%d is divisible by both 5 and 11.\n", number); 
  } else { 
    printf("%d is not divisible by both 5 and 11.\n", number); 
  }
}  
return 0;
} 
