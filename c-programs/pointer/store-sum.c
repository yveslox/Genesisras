#include<stdio.h>

void main()
{
 int a,b,c;
 int *p1,*p2,*p3;
 
 p1=&a;
 p2=&b;
 printf("Enter two value:");
 scanf("%d%d",p1,p2);
 p3=&c;
 *p3=*p1+*p2;
 printf("Sum of two no is :>>%d\n",*p3);
}
