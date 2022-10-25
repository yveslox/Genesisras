#include<stdio.h>

void main()
{
 int len,i,j;
 
 char s1[20],s2[20];
 
 printf("Enter original string:");
 fgets(s1, sizeof(s1), stdin);
 len = 0;
 
 while(s1[len]!='\0')
 {
  len++;
 }
 
 for(i=0,j=len-1;i<len;i++,j--)
 {
  s2[j] = s1[i];
 }
 s2[len] ='\0';
 printf("reverse string: %s\n",s2);
 
}
