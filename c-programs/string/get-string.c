#include<stdio.h>
#include<curses.h>


void main()
{
 char str[100],ch;
 
 int n,count=0;
 
 printf("Enter String:");
 
 while(1)
 {
  ch=getchar();
  if(ch==13)
  {
    break;
  }
  str[count] = ch;
  count++;
 }
 printf("Entered string :%s\n",str);
 
 //return 0;
}
