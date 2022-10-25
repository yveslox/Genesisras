#include<stdio.h>
#include<stdlib.h>

void copy(char*, char*);

int main()
{
 char a[10]="Maulik";
 char *p;
 copy(p,a);
 
 printf("Copy string :>>%s\n",p);
 return 0;
}

void copy(char *x,char *y)
{
 int i;
 for(i=0;y[i]!='\0';i++)
 {
  x[i]=y[i];
 }
 x[i] ='\0';
}
