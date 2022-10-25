#include<stdio.h>

void main()
{
 int *p,a[10],i;
 p=&a[10];
 
 printf("Enter the value:>>\n");
 for(i=0;i<5;i++,p++)
 {
  scanf("%d",&*p);
 }
 
 p = p -1;
 
 for(i=0;i<5;i++,p--)
 {
  printf("\n%d",*p);
 }
 printf("\n");
}
