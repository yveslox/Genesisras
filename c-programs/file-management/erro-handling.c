#include<stdio.h>

int main()
{
 FILE *fp;
 int n;
 
 fp= fopen("data-1.txt","r");
 
 if(fp == NULL)
 {
  printf("File can not open.\n");
 }
 else
 { 
  printf("File is opened.\n");
 }
 
 fclose(fp);
 return 0;
}
