#include<stdio.h>

int main()
{
 FILE *fp;
 char ch;
 
 fp = fopen("mydemo","r");
 
 printf("\n");
 while(!feof  (fp))
 {
  ch =  fgetc(fp);
  if(ferror(fp))
  {
   printf("Error in reading file");
   break;
  }
  else
  printf("%c",ch);
 }
 
 fclose(fp);
 return 0;
}
