#include<stdio.h>

void main()
{
 int a[10],b[10],c[10],i,n;
 
 printf("Enter size of array:");
 scanf("%d",&n);
 printf("Enter %d elements of array A\n",n);
 
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 
 printf("Enter %d elements of array B\n",n);
 
 for(i=0;i<n;i++)
 {
  scanf("%d",&b[i]);
 }
 
 for(i=0;i<n;i++)
 {
  c[i] = a[i] + b[i];
 }
 
 printf("third array \n");
 for(i=0;i<n;i++)
 {
  printf("%d\n",c[i]);
 }
}
