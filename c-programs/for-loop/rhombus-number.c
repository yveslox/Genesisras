#include<stdio.h>

void main()
{
 int num,i,c,s,n;
 
 printf("Enter maximum number :\n");
 scanf("%d",&num);
 
 for(i=1;i<=num;i++)
 {
  for(s=num-i;s>=1;s--)
     printf(" ");
   printf("%d",i);
  for(s = i*2;s>1;s--)
     printf(" ");
  printf("%d",i);
  printf("\n");
 }
 
 for(i=1,n=num-1;i<num;i++,n--)
 {
  for(s=i;s>=1;s--)
     printf(" ");
   printf("%d",n);
  for(s=n*2;s>1;s--)
     printf(" ");
  printf("%d",n);
  printf("\n");
 }
 
}
