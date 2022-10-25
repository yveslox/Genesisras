#include<stdio.h>

void main()
{
char s1[20],s2[20];
int i =0;

printf("Enter a string :>>");
fgets(s1, sizeof(s2), stdin);

while(s1[i]!='\0')
{
 if(s1[i]>=65&&s1[i]<=90)
 {
  s2[i]=s1[i]+32;
 }
 else
 {
  s2[i] = s1[i];
 }
 i++;
}
s2[i] ='\0';
printf("Upper case string:>>%s\n",s2);

}
