#include<stdio.h>

int main()
{
 int i;
 int arr[10];
 int *ptr;
 ptr =arr;
 
 printf("Enter 5 elements:\n");
 for(i=0;i<5;i++)
 {
  scanf("%d",ptr);
  ptr++;
 }
 
 ptr = arr;
 printf("Entered numbers:\n");
 for(i=0;i<5;i++)
 {
  printf("%d\n",*ptr);
  ptr++;
 }
}
