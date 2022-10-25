#include<stdio.h>

void main()
{
 int num[10],i,max=0,n;
 
 printf("How many elements?\n");
 scanf("%d",&n);
 
 printf("Enter %d elements\n",n);
 
 for(i=0;i<n;i++)
 {
  scanf("%d",&num[i]);
  if(num[i]>max)
  {
   max = num[i];
  }
 }
 printf("maximum = %d\n",max);
}
