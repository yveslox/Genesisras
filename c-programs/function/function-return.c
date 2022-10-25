#include<stdio.h>

int soo(int);

void main()
{
 int n,ans;
 printf("Enter the value of N:>>");
 scanf("%d",&n);
 
 ans=soo(n);
 printf("the sum is :>>%d\n",ans);
 
}

int soo(int i)
{
 int j,k=0;
 
 for(j=1;j<=i;j+=2)
 {
  k+=j;
 }
 return k;
}
