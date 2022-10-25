#include<stdio.h>

int pri(int);
void main()
{
 int n,s;
 printf("Enter the value of N:>>");
 scanf("%d",&n);
 
 if(pri(n)==1)
 {
  printf("%d is prime\n",n);
 }
 else
 {
  printf("%d is not prime\n",n);
 }
}


int pri(int m)
{
 int i;
 
 for(i=1;i<=m-1;i++)
 {
  if(m%i==0)
  {
   return 1;
  }
   return 2;
 }
}
