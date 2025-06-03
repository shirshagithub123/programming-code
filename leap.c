#include <stdio.h> 
int main() { 
   int year;  
   printf("\n\n****C program to check whether a year is a leap year or not****\n"); 
   printf("\n****Name-Shirsha Basak,MCA_2B,Roll-37****\n");
   printf("Enter a year: "); 
   scanf("%d", &year); 
   if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) { 
      printf("%d is a leap year.\n", year); 
    } else { 
      printf("%d is not a leap year.\n", year); 
    } 
   return 0;
} 
