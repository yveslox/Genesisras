#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    printf("Do you want to shutdown your PC now (y/n)?");
    scanf("%c",&ch);

    if(ch =='y' || ch=='Y')
    {
        system("shutdown -P now");
    }

return(0);
}