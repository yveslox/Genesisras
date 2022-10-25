#include<stdio.h>

int main()
{
 FILE *fp;
 char s[50];
 
 fp=fopen("data-1.txt","r");
 
 printf("Entered text:\n");
 fgets(s,49,fp);
 
 while(!feof(fp))
 {
  printf("%s",s);
  fgets(s,49,fp);
 }
 
 fclose(fp);
 return 0;
}
