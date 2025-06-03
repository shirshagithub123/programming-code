#include <stdio.h>
int main()
{
int num,sum=0,temp,remainder;
printf("\n****C program to check whether a given number is an Armstrong number or not.****\n"); 
 printf("\n***Name-Shirsha Basak,MCA_1B,Roll-37***\n");
 printf("Enter a number: ");
 scanf("%d",&num);
 temp = num;
 while(num>0)
 {
    remainder=num % 10;
    sum=sum+(remainder*remainder*remainder);
    num/=10;
 }
 if(temp == sum)
 {
 printf("%d is an armstrong number\n",temp);
 }
 else
 {
 printf("%d is not an armstrong number\n",temp);
 }
 return 0;
 }
