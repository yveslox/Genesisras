#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void selct(char *items,int count);

int main(void)
{
 char s[255];
 printf("Enter a string:");
 scanf("%s",s);
 
 selct(s,strlen(s));
 printf("The sorted string is :%s\n",s);
 return 0;
}

void selct(char *items,int count)
{
register int a,b,c;
int exchange;
char t;

for(a = 0;a<count-1;++a)
{
 exchange = 0;
 c = a;
 t = items[a];
 for(b =a +1;b<count;b++)
 {
  if(items[b]<t)
  {
   c = b;
   t = items[b];
   exchange = 1;
  }
 }
 if(exchange)
 {
  items[c] = items[a];
  items[a] = t;
 }
}
}
