#include<stdio.h>

void main()
{
 int i,n,j,k = 1;
 char  ch='A';
 printf("Enter how many rows own:\n");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
  if((i%2)==0)
  {
   for(j=1;j<=i;j++)
   {
    printf("%d ",k);
    k++;
   }
  }
  else 
  {
   for(j=1;j<=i;j++)
   {
    printf("%c ",ch);
    ch++;
   }
  }
  printf("\n");
 }
}
