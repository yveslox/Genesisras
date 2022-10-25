#include<stdio.h>

void main()
{
 int len = 0;
 char s[10];
 
 printf("Enter a string:\n");
 scanf("%s",s);
 
 while(s[len]!='\0')
 {
  len ++;
 }
 
 printf("Length:%d\n",len);
}
