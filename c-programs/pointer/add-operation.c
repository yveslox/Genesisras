#include<stdio.h>

void main()
{
 int p;
 int *ptr;
 
 ptr=&p;
 printf("Enter value:");
 scanf("%d",ptr);
 *ptr=*ptr+5;
 printf("Value of p is: %d\n",p);
 printf("Value of *ptr :%d\n",*ptr);
}



