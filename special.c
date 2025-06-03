#include <stdio.h> 
int main() {  
  char ch; 
  printf("\n\n*****C program to input any character and check whether it is an alphabet, digit, or special character****\n");
  printf("\n****Name-Shirsha Basak,MCA_1B,Roll-37****\n");
  printf("Enter any character: "); 
  scanf("%c", &ch);  
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) { 
    printf("%c is an alphabet.\n", ch); 
  } 
  else if (ch >= '0' && ch <= '9') { 
    printf("%c is a digit.\n", ch); 
  }
  else { 
   printf("%c is a special character.\n", ch); 
   } 
return 0;
}
