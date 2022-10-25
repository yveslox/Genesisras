#include<stdio.h>

union abc
{
 char a;
 int b;
 float c;
};

struct xyz
{
 char x;
 int y;
 float z;
};


int main()
{
 union abc p;
 struct xyz q;
 
 
 printf("Size of structure : %ld\n",sizeof(struct xyz));
 
 q.x= 'N';
 q.y= 10;
 q.z= 14.345;
 
 
 printf("q.x= %c\nq.y= %d\nq.z=%f\n",q.x,q.y,q.z);
 
 printf("Size of union : %ld\n",sizeof(union abc));
 p.a ='N';
 printf("p.a : %c\n",p.a);
 p.b = 10;
 printf("p.b : %d\n",p.b);
 p.c = 14.345;
 printf("p.c : %f\n",p.c);
 
 return 0;
}
