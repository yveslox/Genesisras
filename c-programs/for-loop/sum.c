#include<stdio.h>

void main()
{
 int i,n,sum;
 
 printf("1 + 3 + 5 + ..... + n Enter N:>>\n");
 scanf("%d",&n);
 
 for(i=1;i<=n;i=i+2)
 {
  sum = sum + i;
 }
 
 printf("Sum = %d\n",sum);
}
