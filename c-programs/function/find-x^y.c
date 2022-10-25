#include<stdio.h>

float po(int,int);
void main()
{
 int x,y;
 float ans;
 printf("Enter the value of x,y:\n");
 scanf("%d%d",&x,&y);
 
 ans=po(x,y);
 
 printf("Your answer is :>>%.2f\n",ans);
}

float po(int a,int b)
{
 float k=1;
 if(b>0)
 {
  while(b>0)
  {
   k = k *a;
   b--;
  }
 }
 return k; 
}
