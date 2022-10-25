#include<stdio.h>

void main()
{
 int a[10][10],i,j,sum=0,m,n;
 
 printf("Enter the row and columns matrix:");
 scanf("%d%d",&m,&n);
 
 printf("Enter the element of matrix:");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 
 
 printf("The matrix is\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d\t",a[i][j]);
  }
  printf("\n");
 }
 
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   if(i==j)
   sum = sum + a[i][j];
  }
 }
 
 printf("Sum of the diagonal elements of a matrix is:%d\n",sum);
 
}
