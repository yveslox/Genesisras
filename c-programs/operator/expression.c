#include<stdio.h>

int main()
{
 int w,x,y,z,p;
 
 printf("Enter 4 integers :");
 scanf("%d %d %d %d",&w,&x,&y,&z);
 
 p=(w + x)/(y-z);
 
 printf("Value of p = %d\n",p);
 
 return 0;
}
