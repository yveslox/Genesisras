#include<stdio.h>

void main()
{
 char s1[100],s2[10];
 int len1=0,len2=0,i,j;
 
 printf("Enter first string:");
 fflush(stdin);
 fgets(s1,sizeof(s1),stdin);
 
 printf("Enter second string:");
 fflush(stdin);
 fgets(s2,sizeof(s2),stdin);
 
 while(s1[len1]!='\0')
 {
  len1++;
 }
 
 while(s2[len2]!='\0')
 {
  len2++;
 }
 
 for(j=0,i=len1;j<=len2;i++,j++)
 {
  s1[i]=s2[j];
 }
 
 puts(s1);
}
