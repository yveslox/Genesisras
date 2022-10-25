#include<stdio.h>

void main()
{
 long int n,s= 0;
 
 printf("n::");
 scanf("%ld",&n);
 
 while(n>0)
 {
  s = n +s;
  n --;
 }
 printf("Sum : %ld\n",s);
}
