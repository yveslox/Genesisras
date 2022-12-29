#include<stdio.h>
#include<dirent.h>

int main()
{
    FILE * fp;
    char ch;
    int size = 0 ;

    fp = fopen("MyFile.txt","r");
    if(fp == NULL)
    {
        printf("File unable to open...\n");
    }
    else 
    {
        printf("File opened..\n");
    }
    
    fseek(fp,0,2);
    size = ftell(fp);
    printf("The size of fiven file is : %d",size);
    fclose(fp);

    return(0);
}