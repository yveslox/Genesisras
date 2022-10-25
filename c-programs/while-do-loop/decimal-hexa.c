#include<stdio.h>

int main()
{
 long decimalnum,remainder,quotient;
 
 int i = 1,j,temp;
 
 char hexadecimalnum[100];
 
 printf("Enter decimal number:");
 scanf("%ld",&decimalnum);
 
 quotient = decimalnum;
 
 while(quotient != 0)
 {
  temp =  quotient % 16;
  
  if( temp == 0)
  printf("%c",hexadecimalnum[j]);
  j--;
 }
 
 printf("\n");
 return 0;
}
