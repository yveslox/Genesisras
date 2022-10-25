#include<stdio.h>

void main()
{
 int n,a[10][10],j,i;
 
 printf("Enter N:");
 scanf("%d",&n);
 
 printf("Enter %d*%d matrix\n",n,n);
 
 
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d\t",&a[i][j]);
  }
 }
 
 printf("Original matrix\n");
 
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d\t",a[i][j]);
  }
  printf("\n");
 }
 
 printf("Traspose matrix\n");
 
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d\t",a[j][i]);
  }
  printf("\n");
 }
 
}
