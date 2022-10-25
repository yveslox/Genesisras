#include<stdio.h>
#include<string.h>

void main()
{
 void revstr(char[]);
 char str[30];
 
 printf("Enter a string:");
 scanf("%s",str);
 
 revstr(str);
 printf("%s\n",str);
}

void revstr(char s[])
{
 int i,j;
 char temp;
 for(i=0,j=strlen(s)-1;i<strlen(s)/2;i++,j--)
 {
  temp=s[i];
  s[i]=s[j];
  s[j]=temp;
 }
}
