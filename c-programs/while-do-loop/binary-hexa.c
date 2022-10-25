#include<stdio.h>

int main()
{
 long int binaryval,  hexadecimaval=0,i=1,remainder;
 
 printf("Enter the binary number:\n");
 scanf("%ld",&binaryval);
 
 while(binaryval != 0)
 {
  remainder = binaryval % 10;
  hexadecimaval = hexadecimaval + remainder * i;
  i = i * 2;
  binaryval = binaryval / 10;
 }
 
 printf("Equivalent hexadecimal value:%lX\n",hexadecimaval);
 
 return 0;
}
