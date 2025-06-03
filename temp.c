#include <stdio.h>
int main() { 
  int choice; 
  float temperature;  
  printf("\n\n****C program to convert temperatures in Celsius to Fahrenheit and vice-versa****\n");
  printf("\n***Name-Shirsha Basak,MCA_1B,Roll-37***\n");
  printf("I. Celsius to Fahrenheit\n");  
  printf("2. Fahrenheit to Celsius\n"); 
  printf("Enter your choice: "); 
  scanf("%d", &choice);  
  switch (choice) {  
  case 1: 
    printf("Enter temperature in Celsius: "); 
    scanf("%f", &temperature); 
    printf("Temperature in Fahrenheit: %.2f\n", (temperature * 9 / 5) + 32);
    break;
  case 2:
    printf("Enter temperature in Fahrenheit: "); 
    scanf("%f", &temperature); 
    printf("Temperature in Celsius: %.2f\n", (temperature-32) * 5 / 9);   
  break; 
default:
  printf("Invalid choice.\n");  
}  
return 0;
} 
