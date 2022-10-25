#include<stdio.h>

void main()
{
 int i,j,k,n;
 
 printf("Enter the no:\n");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
  for(k=1;k<=n-i;k++)
  {
    printf(" ");
  }
  for(j=1;j<=i;j++)
  {
    printf("* ");
  }
   printf("\n");
 }
 
}
