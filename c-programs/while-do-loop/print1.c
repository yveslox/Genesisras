#include<stdio.h>

void main()
{
 int i;
 
 i=1;
 while(i<=10)
 {
  if(i%2==0)
  {
   printf("-%d\t",i*i);
  }
  else
  {
   printf("%d\t",i*i);
  }
  i++;
 }
 printf("\n");
}
