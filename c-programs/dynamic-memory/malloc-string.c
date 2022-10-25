#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
 char s1[25] = "Nils patel";
 
 int len = strlen(s1);
 
 char *ps;
 
 ps = (char *)malloc((len+1) * sizeof(int));
 strcpy(ps,s1);
 
 printf("Ps = %s\n",ps);
 
 free(ps);
 
 return 0;
}
