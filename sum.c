#include <stdio.h>
int main()
{
    int a,b,c; 
    float sum, avg; 
    printf("\n\n****Program to find the sum and average of three numbers**** \n");
    printf("\n****Name-Shirsha Basak,MCA_1B,Roll-37****\n");
    printf("Enter three numbers: "); 
    scanf("%d %d %d", &a, &b, &c);  
    sum = a + b + c;  
    avg = sum / 3.0; 
    printf("Sum of the three numbers is: %.2f\n", sum); 
    printf("Average of the three numbers is: %.2f\n", avg); 
    return 0; 
}