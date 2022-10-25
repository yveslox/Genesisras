#include<stdio.h>

void main()
{
 int n,sum=0;
 int s;
 printf("n::");
 scanf("%d",&n);
 
 while(n>0)
 {
  s = n % 10;
  sum = sum + s;
  n = n / 10;
 }
 
 printf("Sum : %d\n",sum);
 
}
