#include<stdio.h>

void main()
{
 char n;
 
 printf("Enter a character:\n");
 scanf("%c",&n);
 
 if(n>=48 && n<= 57)
 {
  printf("Number\n");
 }
 
 else if(n>= 65 && n<= 90)
 {
  printf("Upper case\n");
 }
 else if(n>97 && n<= 122)
 {
  printf("Lower case\n");
 }
 else
 {
  printf("Other symbol\n");
 }
}
