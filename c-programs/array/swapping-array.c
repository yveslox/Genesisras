#include<stdio.h>

void main()
{
 int a[5],b[5],c[5],i;
 
 printf("Enter frist array->\n");
 for(i=0;i<5;i++)
 scanf("%d ",&a[i]);
 
 printf("\nEnter Second array\n");
 for(i=0;i<5;i++)
 scanf("%d ",&b[i]);
 
 printf("Arrays before swapping\n");
 printf("First array->\n");

 for(i=0;i<5;i++)
 { 
  printf("%d ",a[i]);
 }
 
 printf("\nSecond array->\n");
 for(i=0;i<5;i++)
 { 
  printf("%d ",b[i]);
 }
 
 for(i=0;i<5;i++)
 {
  c[i] = a[i];
  a[i] = b[i];
  b[i] = c[i];
 }
 
 printf("\nArrays after swapping\n");
 printf("First array ->\n");
 for(i=0;i<5;i++)
 { 
  printf("%d ",a[i]);
 }
 
 printf("\nSecond array ->\n");
 for(i=0;i<5;i++)
 { 
  printf("%d ",b[i]);
 }
  
 printf("\n");
 
}
