#include<stdio.h>

void main()
{
 int arr[20],n,i;
 
 int max(int[],int);
 printf("How many elements?");
 scanf("%d",&n);
 
 printf("Enter %d elements below:\n",n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("Maximum : %d\n",max(arr,n));
}

int max(int m[],int p)
{
 int maximum=0,i;
 for(i=0;i<p;i++)
 {
  if(m[i]>maximum) maximum=m[i];
 }
 return maximum;
}
