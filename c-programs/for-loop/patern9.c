#include<stdio.h>

void main()
{
 int i,j,n,k;
 
 printf("Enter the value\n");
 scanf("%d",&n);
 
  for(i=n;i>=1;i--)
  {
     for(k=1;k<=n-i;k++)
    {
      printf(" ");
    }
     for(j=i;j>=1;j--)
    {
      printf("%d",j);
    }
    printf("\n");
  }
}
