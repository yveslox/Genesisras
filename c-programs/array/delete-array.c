#include<stdio.h>

void main()
{
 int m[10],del,i,j,n;
 
 printf("How many elements ?");
 scanf("%d",&n);
 
 printf("\nEnter number %d elements: \n",n);
 
 for(i=0;i<n;i++)
 {
  printf("\n");
  scanf("%d",&m[i]);
 }
 
 printf("\nEnter number to be delete:\n");
 scanf("%d",&del);
 for(i=0;i<n;i++)
 {
 if( m[i] == del) break;
 }
 
 for(j=i;j<n;j++)
 {
   m[j] = m[j+1];
 }
 n--;
 
 printf("\nArray after insertion\n");
 for(i=0;i<n;i++)
 {
  printf("%d ",m[i]); 
 }
 
 printf("\n");
}
