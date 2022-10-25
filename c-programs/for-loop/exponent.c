#include<stdio.h>
#include<math.h>

void main()
{
 int x,n,fact,i,j;
 
 float sum = 1;
 
 printf("Enter the 'x' value:\n");
 scanf("%d",&x);
 
 printf("Enter the 'n' value:\n");
 scanf("%d",&n);
 
 for(i=1;i<n;i++)
 {
  fact =1;
  for(j=i;j>=1;j--)
   fact = fact * j;
  sum = sum +(pow(x,i)/fact);
 }
 
 printf("Sum of the series :%f\n",sum);
}
