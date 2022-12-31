#include<stdio.h>
#include<errno.h>
#include<dirent.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;
    int pos;
    
    if(fp1 == fopen("File_1.txt","r"))
    {
        printf("File cannot be opened.");
        //return ;
    }
    else 
    {
        printf("File opened for copy...\n");
    }
    fp2 = fopen("File_2.txt","w");

    fseek(fp1, 0L,SEEK_END);
    pos = ftell(fp1);
    fseek(fp1, 0L,SEEK_SET);
    while(pos--)
    {
        ch = fgetc(fp1);
        fputc(ch,fp2);
    }

    fclose(fp1);
    fclose(fp2);
    
    return(0);
}
