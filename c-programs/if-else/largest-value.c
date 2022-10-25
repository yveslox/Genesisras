#include<stdio.h>

void main()
{
 int a,b,c;
 
 printf("Enter Value A:\n");
 scanf("%d",&a);
 
 printf("Enter Value B:\n");
 scanf("%d",&b);

 printf("Enter Value C:\n");
 scanf("%d",&c);
 
 if(a>b)
 {
  if(a>c)
  {
    printf("A is Big value\n");
  }
  else
  {
   printf("C is Big value\n");
  }
  
 }
 else
 {
  if(b>c)
  {
    printf("B is Big value\n");
  }
  else
  {
   printf("C is Big value\n");
  }
 }
 
 
}
