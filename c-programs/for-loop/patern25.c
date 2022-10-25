#include<stdio.h>

void main()
{
 char ch='A'-1;
 int i,j,k,c;
 
 for(i=5;i>=1;i--)
 {
  for(j=1;j<i;j++)
  {
   printf(" ");
  }
  for(k=5;k>=i;k--)
  {
   printf("%c",ch+k);
  }
  printf("\n");
 }
  for(c=65;c<=122;c++)
  {
   printf("%c",c);
   printf(" ");
  }
  printf("\n");
}
