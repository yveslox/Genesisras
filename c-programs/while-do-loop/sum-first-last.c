#include<stdio.h>

void main()
{
 int n,s,sum=0;
 
 printf("n::");
 scanf("%d",&n);
 
 sum= n%10;
 
 while(n>0)
 {
  s = n % 10;
  s = n / 10;
 }
 
 sum = sum + s;
 printf("Sum: %d\n",sum);
 
}
