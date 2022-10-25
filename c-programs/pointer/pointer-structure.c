#include<stdio.h>

struct book
{
 int bno;
 char subtopicdefinition[40];
};

void display(struct book*);

void main()
{
 struct book b;
 printf("Enter book no:");
 scanf("%d",&b.bno);
 
 printf("Enter book subtopicdefinetion:");
 scanf("%s",b.subtopicdefinition);
 display(&b);
}

void display(struct book *b)
{
 printf("Details are:\n");
 printf("Book number=%d\n",b->bno);
 printf("Book subtopicdefinition %s\n",b->subtopicdefinition);
}
