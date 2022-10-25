#include<stdio.h>

void main()
{
 int ts,h=0,m=0,s;
 
 printf("Enter total sec:");
 scanf("%d",&ts);
 
 while(ts>=60)
 {
  m++;
  while(m>=60)
  {
   h++;
   m = m-60;
  }
  ts = ts - 60;
 }
 printf("HH::MM::SS = %d:%d:%d\n",h,m,ts);
}
