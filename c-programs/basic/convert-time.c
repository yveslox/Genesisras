#include<stdio.h>

void main()
{
 int ts,h,m,s;
 printf("Enter total sec:\n");
 scanf("%d",&ts);
 
 h=ts/3600;
 ts=ts%3600;
 m=ts/60;
 s=ts%60;
 
 printf("hour = %d,min = %d, sec =%d\n",h,m,s);
}
