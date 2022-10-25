#include<stdio.h>
#include<math.h>

void main()
{
 int n,a;
 
 printf("Enter the value of N:\n");
 scanf("%d",&n);
 
 a=sqrt(n);
 
 if(n-(a*a)==0)
  printf("It is perfect square\n");
 else 
  printf("It is not perfect square\n");
  
}
