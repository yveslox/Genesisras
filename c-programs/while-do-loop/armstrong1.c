#include<stdio.h>

void main()
{
 int n,s,sum=0,temp;
 
 printf("n::");
 scanf("%d",&n);
 
 temp = n;
 
 while(n>0)
 {
  s = n % 10;
  sum = sum + (s * s * s);
  n= n / 10;
 }
 
 if(sum ==temp)
 {
  printf("Number is Armstrong\n");
 }
 else
 {
  printf("Number is Not Armstrong\n");
 }
}
