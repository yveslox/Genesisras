#include<stdio.h>

void main()
{
 int i,n,sum=0;
 
 printf("1^1+2^2+3^3+....+n^2 Enter N:\n");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
   sum = sum +(i * i);
 }
 printf("Sum = %d\n",sum);
}
