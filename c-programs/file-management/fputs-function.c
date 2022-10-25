#include<stdio.h>
#include<string.h>

int main()
{
 FILE *fp;
 char s[50];
 fp=fopen("data-1.txt","w");
 
 printf("Enter line of text:\n");
 fgets(s,49,stdin);
 
 while(strlen(s)>0)
 { 
  fputs(s,fp);
  fputs("\n",fp);
  fgets(s,49,stdin);
 }
 fclose(fp);
 printf("\n");
 return 0;
}
