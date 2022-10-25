#include<stdio.h>

void main()
{
 int num,i,f,r,sum = 0,temp;
 
 printf("Enter a number:\n");
 scanf("%d",&num);
 
 temp=num;
 
 while(num)
 {
  i=1;f=1;
  r = num%10;
  while(i<=r)
  {
   f =f*i;
   i++;
  }
  sum = sum + f;
  num = num / 10;
 }
 if(sum == temp)
 printf("%d is a strong number\n",temp);
 else
 printf("%d is not a strong number\n",temp);
}
