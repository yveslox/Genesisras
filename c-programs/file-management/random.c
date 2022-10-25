#include<stdio.h>

int main()
{
 FILE *fp;
 char ch;
 long n;
 
 fp = fopen("demo","w");
 printf("Enter string:");
 
 ch = getchar();
 
 while(ch !=EOF)
 {
  putc (ch,fp);
  ch = getchar();
 }
 fclose(fp);
 
 fp = fopen("demo","r");
 printf("Char - pos\n");
 
 n = 0L;
 
 while(feof(fp) == 0)
 {
  fseek(fp,n,0);
  printf("%3c - %2ld",fgetc(fp),ftell(fp));
  n = n + 1L;
 }
 
 rewind(fp);
 printf("String:");
 ch = fgetc(fp);
 
 while(ch != EOF)
 {
  printf("%c",ch);
  ch = fgetc(fp);
 }
 fclose(fp);
 printf("\n");
 return 0;
}
