#include<stdio.h>

void main()
{
 int i,j;
 
 i=1;
 
 while(i<=5)
 {
  j=1;
  while(j<=i)
  {
  printf(" %d",j);
  j++;
  }
  printf("\n");
  i++;
 }
 printf("\n");
}
