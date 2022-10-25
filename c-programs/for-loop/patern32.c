#include<stdio.h>

void main()
{
 int num,r,j,s;
 
 printf("Enter no of rows:\n");
 scanf("%d",&num);
 
 printf("\n*\n");
 
 for(r=1;r<=num;r++)
 {
  printf("*");
  
  for(s=1;s<r;s++)
     printf(" "); 
  printf("*\n");
 }
 
 for(j=1;j<=num+2;j++)
 printf("*");
 
 printf("\n");
}
