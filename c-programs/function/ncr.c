#include<stdio.h>
int fact(int);

int main()
{
 int n,r,ncr;
 
 printf("Enter any two number->");
 scanf("%d %d",&n,&r);
 ncr=fact(n)/(fact(r)*fact(n-r));
 printf("The Ncr factor of %d and %d is %d\n",n,r,ncr);
 return 0;
}


int fact (int n)
{
 int i=1;
 while(n!=0)
 {
  i=i*n;
  n--;
 }
 return 1;
}
