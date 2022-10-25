#include<stdio.h>

void main()
{
 int i,n,k,j;
 
 printf("Enter any value:\n");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {
   printf("* ");
  }
  
  for(k=1;k<2*(n-i);k++)
  {
   printf(" ");
  }
  
  for(j=1;j<=i;j++)
  {
   if(i==n && j==n)
   {
    printf("* ");
   }
   else
   {
    printf("* ");
   }
  }
  printf("\n");
 }
}
