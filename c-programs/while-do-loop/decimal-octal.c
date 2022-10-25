#include<stdio.h>

int main()
{
 long decimalnum, remainder, quotient;
 int octalnumber[100], i = 1, j;
 
 printf("Enter the decimal number:");
 scanf("%ld",&decimalnum);
 
 quotient = decimalnum;
 
 while(quotient != 0)
 {
  octalnumber[i++] = quotient % 8;
  quotient = quotient / 8;
 }
 
 printf("Equivalent octal value of decimal no %ld:",decimalnum);
 for(j = i - 1; j > 0;j--)
       printf("%d",octalnumber[j]);
 
 
 printf("\n");
 return 0;
}
