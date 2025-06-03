#include <stdio.h>
int main()
{
int num,rev=0,temp,remainder;
 printf("\n\n*****C program to check whether a number is a palindrome or not****\n");
 printf("\n***Name-Shirsha Basak,MCA_1B,Roll-37***\n");
 printf("Enter a number: ");
 scanf("%d",&num);
 temp = num;
 while(num>0)
 {
    remainder=num % 10;
    rev=(rev*10)+remainder;
    num/=10;
 }
 if(temp == rev)
 {
 printf("%d is an palindrome number\n",temp);
 }
 else
 {
 printf("%d is not an palindrome number\n",temp);
 }
 return 0;
 }