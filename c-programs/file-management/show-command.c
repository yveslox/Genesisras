#include<stdio.h>

int main(int argc, char *argv[])
{
 int i;
 printf("Program name: %s\n",argv[0]);
 
 for(i=1;i<argc;i++)
 {
  printf("Argument %d: %s\n",i,argv[i]);
 }
 return 0;
}
