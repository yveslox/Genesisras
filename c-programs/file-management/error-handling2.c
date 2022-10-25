#include<stdio.h>
#include<stdlib.h>

int main()
{
 FILE *fp;
 
 fp= fopen("data-1.txt","r");
 
 if(fp == NULL)
 {
  puts("File can not open.");
  exit(1);
 }
 
 fclose(fp);
 return 0;
}
