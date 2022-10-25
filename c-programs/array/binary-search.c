#include<stdio.h>

int main()
{
 int num[10],i,beg,end,mid,pos= -1 ,value;
 
 
 printf("Enter ten numbers in ascending order:::\n");
 
 
 for(i=0;i<10;i++)
 {
  scanf("%d",&num[i]);
 }
 
 printf("Enter the number to be search :::");
 scanf("%d",&value);
 
 
 beg = 0;
 end = 10 - 1;
 
 while(beg <= end)
 {
  mid = (beg + end) / 2;
  if(value == num[mid])
  {
   pos = mid + 1;
   break;
  }
  else if(value >= num[mid])
  beg = mid + 1;
  else 
  end = mid - 1;
 }
 
 if(pos == -1)
 {
  printf("\nThe element %d not found\n",value);
 }
 else
 {
  printf("\nThe position of %d is :::%d\n",value,pos);
 }
 return 0;
}
