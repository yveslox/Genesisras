#include<stdio.h>
#include<string.h>

void main()
{
 int i,n,j;
 
 printf("Enter any Value:\n");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {
   printf(" %d",j*j);
  }
  printf("\n");
 }
 //getc();
}
