#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

int main()
{
 int *p;
 int i,x,n,s;
 
 printf("Enter size of dynamic array:");
 scanf("%d",&n);
 
 p = (int *)malloc(n *sizeof(int));
 
 if(!p)
   printf("Unable to allocate size.\n");
 else
 {
  for(i=0;i<n;i++)
  {
   printf("Enter value :");
   scanf("%d",(p+i));
  }
  
  printf("Values are :");
  s=0;
  for(i=0;i<n;i++)
  {
   printf("%d ",*(p+i));
   s = s + *(p+i);
  }
  printf("Sum of elements = %d",s);
  
  x = n;
  printf("\nEnter new size of dynamic array:");
  scanf("%d",&n);
  
  p=realloc(p , n*(sizeof(int)) );
  
  if(!p)
  {
   printf("Unable to allocate size\n");
   exit(1);
  }
  for(i=x;i<n;i++)
  {
   printf("Enter additional value :");
   scanf("%d",(p+i));
  }
   printf("Values are :");
   s = 0;
  for(i=0;i<n;i++)
  {
   printf("%d ",*(p+i));
   s = s + *(p+i);
  }
  printf("\nSum of element = %d\n",s);
 }
 free(p);
 return 0;
}
