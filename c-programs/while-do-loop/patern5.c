#include<stdio.h>

void main()
{
 int i,j;
 
 i=5;
 
 while(i>=1)
 {
  j=i;
  while(j<=5)
  {
  printf(" %d",i);
  j++;
  }
  printf("\n");
  i--;
 }
 printf("\n");
}
