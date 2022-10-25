#include<stdio.h>

void main()
{
 int m[10],ins,i,n,pos;
 
 printf("How many elements ?");
 scanf("%d",&n);
 
 printf("\nEnter number %d elements: \n",n);
 
 for(i=0;i<n;i++)
 {
  printf("\n");
  scanf("%d",&m[i]);
 }
 
 printf("\nEnter number to be inserted:\n");
 scanf("%d",&ins);
 
 printf("\nEnter position:\n");
 scanf("%d",&pos);
 
 for(i=n;i>pos;i--)
 {
  m[i] = m[i-1];
 }
 
 m[pos] = ins;
 n++;
 
 printf("\nArray after insertion\n");
 for(i=0;i<n;i++)
 {
  printf("%d ",m[i]); 
 }
 
 printf("\n");
}
