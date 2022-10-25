#include<stdio.h>

void main()
{
 int n,i;
 int sum = 0;
 printf("Enter the n i.e max values of series:\n");
 scanf("%d",&n);
 printf("1");
 
 for(i=2;i<=n-1;i++)
   printf(" 1/%d +",i);
 for(i=1;i<=n;i++)
   sum= sum + i;
 printf("1/%d ",n);
 printf("Sum = 1/%d",sum+1/n);
 
 printf("\n");
}
