#include<stdio.h>

int main()
{
 FILE *fp;
 char ch;
 fp=fopen("data-1.txt","w");
 
 printf("Enter string(ctrl + z to end):");
 ch = getchar();
 
 while(ch!=EOF)
 { 
  putc(ch,fp);
  ch = getchar();
 }
 fclose(fp);
 printf("\n");
 return 0;
}
