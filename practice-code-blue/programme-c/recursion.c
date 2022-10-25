#include<stdio.h>

void recursion(int n)
{

if(n==0)
 {
  return;
 }

 printf("%d ",n);
 recursion(n-1);
}

int main()
{
  recursion(5);
  printf("\n");
}
