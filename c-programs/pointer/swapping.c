#include<stdio.h>

void main()
{
 int a,b;
 int *x,*y,t;
 
 printf("Enter the value:");
 scanf("%d%d",&a,&b);
    x =&a;
    y =&b;
    t =*y;
    *y =*x;
    *x =t;
 printf("x:%d\ny:%d\n",*x,*y); 
}
