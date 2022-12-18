#include<stdio.h>

const int Max = 5;

int main()
{
    int var[] = {10,20,30,40,50};

    int i = 0;

    int *ptr[Max];

    for(i = 0;i<Max;i++)
    {
        ptr[i] = &var[i];
    }

    for(i = 0;i<Max;i++)
    {
        printf("Value of var[%d] = %i\n",i,*ptr[i]);
    }

    //printf("\n");
    return 0;
}