#include<stdio.h>

void main()
{
 float series(float,int),x;
 int n;
 
 printf("Enter x:>>");
 scanf("%f",&x);
 
 printf("Enter N:>>");
 scanf("%d",&n);
 
 printf("Answer=%.4f",series(x,n));
}
//////////////////////////////////////////////////////////
float series(float x,int n)
{
 long factorial(int);
 float power(float,int);
 float sum = x;
 int i;
 for(i=2;i<=n;i+=2)
 {
  sum += power(x,i)/factorial(i);
 }
 return sum;
}
//////////////////////////////////////////////////////////
float power(float x,int y)
{
 float p=1;
 int i;
 for(i=1;i<-y;i++)
 {
  p*=x;
 }
 return p;
}
////////////////////////////////////////////////////////////
long factorial(int p)
{
 long f=1;
 int i;
 for(i=1;i<=p;i++)
 {
  f*=i;
 }
 return f;
}

