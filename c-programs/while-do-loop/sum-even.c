#include<stdio.h>

void main()
{
 int n,s,sum = 0;
 
 printf("n::");
 scanf("%d",&n);
 
 while(n>0)
 {
  s = n%10;
  if(s % 2 == 0)
  {
   sum = sum + s;
  }
  n = n / 10;
 }
 printf("Sum : %d\n",sum);
}
