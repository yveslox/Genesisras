#include<stdio.h>

void main()
{
 
 int i,j,k,n;
 printf("Enter any Value of N:\n");
 scanf("%d",&n);
 
 
 for(i=1;i<=n;i++)
 {
    for(k=1;k<=n-i;k++)
    {
     printf(" ");
    }
    for(j=1;j<=i;j++)
    {
     printf(" *");
    }
   printf("\n");
 }
 
 for(i=n-1;i>=1;i--)
 {
    for(k=1;k<=n-i;k++)
    {
     printf(" ");
    }
    for(j=i;j>=1;j--)
    {
     printf(" *");
    }
   printf("\n");
 }
 
 printf("\n");
}
