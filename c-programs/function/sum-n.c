#include<stdio.h>
int add();

void main()
{
 int addn(int);
 int n,ans;
 
 printf("Enter value n:>>");
 scanf("%d",&n);
 
 ans = addn(n);
 printf("Answer = %d\n",ans);
 
}

int addn(int m)
{
 int total = 0,i;
 
 for(i=1;i<=m;i++)
 {
  total += i;
 }
 return total;
}
