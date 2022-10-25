#include<stdio.h>

int fact (int);

void main()
{
 int ans,n;
 printf("Enter the value of N:>>");
 scanf("%d",&n);
 ans=fact(n);
 printf("Your factoriel is :>>%d\n",ans);
 
}

int fact(int n)
{
 int facto=1;
 if(n==1)
 {
  return facto;
 }
 else
 {
  facto=n*fact(n-1);
  return(facto);
 }
}
