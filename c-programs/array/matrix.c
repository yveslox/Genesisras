#include<stdio.h>

int main()
{
 int a[3][3];
 int i,j;
 
 printf("Enter value:\n");
 
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d", &a[i][j]);
  }
 }
 printf("The matrix is ::\n");
 
 for(i=0; i<3;i++)
 {
  for(j = 0;j< 3;j++)
  {
   printf("%d ",a[i][j]);
  }
  printf("\n");
 }
 
 printf("\n");
}
