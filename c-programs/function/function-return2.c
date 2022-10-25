#include<stdio.h>

int sos(int);

void main()
{
 int n,ans;
 printf("Enter the value of N:>>");
 scanf("%d",&n);
 
 ans=sos(n);
 printf("the Sum is :>>%d\n",ans);
}

int sos(int i)
{
 int j=1,k=0;
 
 for(j=1;j<=i;j++)
 {
  k=j*j;
 }
 return k;
}
