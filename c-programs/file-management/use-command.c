#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[])
{
 FILE *ft,*fs;

 char ch;
 printf("Program name: %s\n",argv[0]);
 
 if (argc !=3)
 {
  puts("Improper number of arguments\n");
  exit(1); 
 }
 
 fs = fopen(argv[1],"r");
 if(fs = NULL)
 {
   puts("Unable to open source file.\n");
   exit(1); 
 }
 
 ft = fopen(argv[2],"w");
 if(ft = NULL)
 {
   puts("Unable to open source file.\n");
   fclose(fs);
   exit(1); 
 }
 
 while(1)
 {
  ch =  fgetc(fs);
  if(ch == EOF)
  break;
  else
   fputc(ch,ft);
 }
 return 0;
}
