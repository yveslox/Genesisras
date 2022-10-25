#include<stdio.h>

int main()
{
 int i=0,j=0;
 char *str1,*str2,*str3;
 
 puts("Enter first string:");
 fgets(str1,sizeof(str1),stdin);
 
 puts("Enter second string:");
 scanf("%s",str2);
 
 puts(str1);
 puts(str2);
 
 while(*str1)
 {
  str3[i++]=*str1++;
 }
 
 while(*str2)
 {
  str3[i++]=*str2++;
 }
 str3[i]='\0';
 printf("After concatenation the strings are\n");
 puts(str3);
 return 0;
}
