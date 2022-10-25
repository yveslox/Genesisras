#include<stdio.h>

void main()
{
 long int a, m=1;
 
 printf("a ::");
 scanf("%ld",&a);
 
 while(a>0)
 {
  m = a * m;
  a--;
 }
 
 printf("fact:%ld\n",m);
}
