#include<stdio.h>
#define MAX 50

void main()
{
 int arr[MAX],n,i;
 
 printf("Enter size of array:");
 scanf("%d",&n);
 
 printf("Enter %d position elements\n",n);
 
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 
 printf("\nEven numbers:");
 for(i=0;i<n;i++)
 {
  if(arr[i]%2==0)
  {
   printf("%d ",arr[i]);
  }
 }
 
 printf("\nOdd numbers:");
 for(i=0;i<n;i++)
 {
  if(arr[i]%2!=0)
  {
   printf("%d ",arr[i]);
  }
 }
 
 printf("\n");
}
