#include<stdio.h>

int main()
{
 FILE *fp;
 char s[50];
 
 fp = fopen("data-1.txt","r");
 
 printf("Enter string:");
 fgets(s,49,stdin);
 printf("%s",s);
 
 fclose(fp);
 printf("\n");
}
