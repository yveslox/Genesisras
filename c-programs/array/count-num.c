#include<stdio.h>

void main()
{
 int m[10],i,pos=0,neg=0,zero=0,n;
 
 printf("How many numbers ?");
 scanf("%d",&n);
 
 printf("Enter %d integer elements\n",n);
 
 for(i=0;i<n;i++)
 {
  printf	("\n");
  scanf("%d",&m[i]);
  
  if(m[i]>0)
  {
   pos++ ;
  }
  else if (m[i]<0)
  {
   neg++;
  }
  else
  {
   zero++;
  }
 }
printf("\nPositive elements=%d\n",pos);
printf("\nNegative elements=%d\n",neg);
printf("\nzero elements=%d\n",zero);
}
