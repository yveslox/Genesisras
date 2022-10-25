#include<stdio.h>

int mx(int,int,int);

void main()
{
 int a,b,c,ans;
 
 printf("Enter tha value of A,B,C:>>\n");
 scanf("%d%d%d",&a,&b,&c);
 
 ans= mx(a,b,c);
 printf("The maximum number is:>>%d\n",ans);
}

int mx(int i,int j,int k)
{
 int g;
 g=((i<j)?((i>k)?i:k):(j>k)?j:k);
 return g;
}
