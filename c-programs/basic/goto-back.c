#include<stdio.h>

int main()
{
int i;

i=1;

label:
printf(" %d",i);
i++;
if( i<= 10)
{
 goto label;
}
printf("\n");
return 0;
}
