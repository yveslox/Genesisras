#include<stdio.h>

struct book
{
 char * subtopicdefinition;
 char author[30];
 int id;
}bk={"C programming example","Nils and team",23};

void main()
{
 struct book *b=&bk;
 
 printf("Name: %s, author: %s, Id: %d\n",b->subtopicdefinition,(*b).author, b->id);
}
