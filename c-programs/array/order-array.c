#include<stdio.h>

void main()
{
 int arr[10],tmp[10],i,j,temp;
 
 for(i=0;i<10;i++)
 {
  printf("Enter value of %d elements:",i+1);
  scanf("%d",&arr[i]);
  tmp[i] = arr[i];
 }
 
 for(i=0;i<10;i++)
 {
  for(j=i+1;j<10;j++)
  {
   if(arr[i] > arr[j])
   {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
   }
  }
 }
 printf("\n----------------------------------------------");
 printf("\n Original\tAscending\tDescinding\n");
 printf("\n----------------------------------------------");
 
 for(i=0,j=9;i<10;i++,j--)
 {
  printf("\n%d\t\t%d\t\t%d",tmp[i],arr[i],arr[j]);
 }
 printf("\n-------------------------------------------------");
 printf("\n Press any key-----\n");
}
