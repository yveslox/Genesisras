#include<stdio.h>

void main()
{
int i,n,k,j;
 printf("Enter any value:\n");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
  {
   if(i==1||j==1||i==n||j==n)
   {
    printf("*");
   }
   else
   {
    printf(" ");
   }
  }
  printf("\n");
 }
}
