#include<stdio.h>

long calc(int);

int main()
{
 int i,j,row,pas;
 
 printf("Enter no of row in pascal triangle:\n");
 scanf("%d",&row);
 
 for(i=0;i<row;i++)
 {
  for(j=0;j<=(row-i-1);j++)
  printf(" ");
  
  for(j=0;j<=i;j++)
  {
   pas=calc(i)/(calc(j)*calc(i-j));
   printf("%d ",pas);
  }
  printf("\n");
 }
 return 0;
}

long calc(int num)
{
 int x;
 long res=1;
 for(x=1;x<=num;x++)
 res=res*x;
 
 return (res);
} 
