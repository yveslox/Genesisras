#include<stdio.h>

void main()
{
 int a=5,*ptr3=&a, **ptr2=&ptr3,***ptr1=&ptr2;
 printf("%d\n",ptr1[0][0][0]);
}
