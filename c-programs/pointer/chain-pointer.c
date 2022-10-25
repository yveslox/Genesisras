#include<stdio.h>
#include<stdlib.h>

int main()
{
 int a = 10;
 int *p ,**pp,***ppp,****pppp;
 
 p=&a;
 
 printf("p = %p\n",p);
 printf("*p = %d\n",*p);
 
 pp = &p;
 
 printf("pp = %p\n",pp);
 printf("*pp= %p\n",*pp);
 printf("**pp = %d\n",**pp);
 
 ppp = &pp;
 
 printf("ppp = %p\n",ppp);
 printf("*ppp= %p\n",*ppp);
 printf("**ppp = %p\n",**ppp);
 printf("***ppp = %d\n",***ppp);
 
 pppp = &ppp;
 
 printf("pppp = %p\n",pppp);
 printf("*pppp= %p\n",*pppp);
 printf("**pppp = %p\n",**pppp);
 printf("***pppp = %p\n",***pppp);
 printf("****pppp = %d\n",****pppp);
}
