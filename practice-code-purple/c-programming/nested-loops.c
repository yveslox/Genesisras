#include<stdio.h>

int main()
{
    int i,j,k;

    printf("Output of the nested loop is :\n");
    for(i=0;i<5;i++)
    {
        printf("\t\t\t\t");
        for(j=0;j<5;j++)
        printf("* ");

        printf("\n");
    }
    
    
    return 0;
}