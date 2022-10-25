#include<stdio.h>
#include<stdlib.h>

int main()
{
 int *p;
 int i,n,s;
 
 printf("Enter number of terms:");
 scanf("%d",&n);
 
 p = (int *)malloc( 5 * sizeof(int));
 
 if(!p)
    printf("Unable to allocate size\n");
 else
 {
  for(i=0;i<n;i++)
  {
   printf("Enter value:");
   scanf("%d",(p+i));
  }
  printf("Values are :");
  s = 0;
  for(i =0;i<n;i++)
  {
   printf("%d ",*(p+i));
   s = s + *(p+i);
  }
  printf("\nSum of elements = %d",s);
 }
 free(p);
 printf("\n");
 return 0;
}
