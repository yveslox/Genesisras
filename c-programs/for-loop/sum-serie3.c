#include<stdio.h>

void main()
{
 int n,i,sum=0;
 
 printf("Enter any no:\n");
 scanf("%d",&n);
 
 for(i=1;i<n;i=i+2)
 {
  printf("%d + ",i);
  sum = sum +i;
 }
 
 printf("%d\n",n);
 printf("Sum = %d\n",sum+n);
 
 
}
