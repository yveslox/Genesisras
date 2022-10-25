#include<stdio.h>

int main()
{
 int a,b,t1,t2,lcm,gcd;
 
 printf("Enter two number :\n");
 scanf("%d%d",&a,&b);
 
 t1 = a;
 t2 = b;
 
 while(t1 != t2)
 {
  if(t1 > t2 )
  {
   t1 = t1 - t2 ;
  }
  else
  {
   t2 = t2 - t1;
  }
 }
 
 gcd = t1;
 lcm =(a * b)/gcd;
 
 printf("LCM = %d , GCM = %d\n",lcm,gcd);
 
 return 0;
}
