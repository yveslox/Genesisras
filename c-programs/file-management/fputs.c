#include<stdio.h>

int main()
{
 FILE *fp;
 char s[50];
 
 fp = fopen("data-1.txt","w");
 
 printf("Enter string:");
 fgets(s,49,stdin);
 fputs("\n",fp);
 
 fclose(fp);
 printf("\n");
}
