#include<stdio.h>

void main()
{
 long num,decimal_num,remainder,base = 1,binary= 0,no_of_1s = 0;
 
 printf("Enter a deciaml integer\n");
 scanf("%ld",&num);
 
 decimal_num = num;
 
 while(num> 0)
 {
  remainder = num %2;
  
  if(remainder == 1)
  {
   no_of_1s++;
  }
  
  binary = binary + remainder * base;
  num = num / 2;
  base = base * 10;
 }
 
 printf("Input number is = %ld\n",decimal_num);
 printf("Its Binary equivalent is = %ld\n",binary);
 printf("No.of 1 ' in the binary number is = %ld\n",no_of_1s);
}
