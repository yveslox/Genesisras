#include<stdio.h>
#include<errno.h>

long count_characters(FILE *);

int main()
{
    FILE *fp1, *fp2;
    int i;
    long cnt;
    char ch,ch1;

    
    if(fp1 == fopen("File_1.txt","r"))
    {
        printf("File has been opened...\n");
        fp2=fopen("File_2.txt","w");
        cnt = count_characters(fp1);

        fseek(fp1, -1L, 2);
        printf("Number of characters to be copied %ld\n",ftell(fp1));

        while(cnt)
        {
            ch = fgetc(fp1);
            fputc(ch,fp2);
            fseek(fp1,-2L,1);
            cnt--;
        }
        printf("**File copied successfully in reverse order**\n");
    }
    else 
    {
        perror("Error occured\n");
    }

    fclose(fp1);
    fclose(fp2);

    return(0);
}


long count_characters(FILE *f)
{
  fseek(f,-1L,2);

  long last_pos = ftell(f);
  last_pos++;
  return last_pos;
}