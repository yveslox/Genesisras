#include<stdio.h>
#include<stdlib.h>

int main()
{
 int *p;
 
 p = (int *)calloc( 1,sizeof(int));
 *p = 23;
 
 printf("Value :%d\n", *p);
 free(p);
 
 return 0;
}
