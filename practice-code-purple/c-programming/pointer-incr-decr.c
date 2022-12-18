#include<stdio.h>

const int Max = 3;

int main()
{
    int var[] = {100,200,300};

    int i,*ptr;
    
    ptr = var;

    for(i = 0;i<Max;i++)
    {
        printf("Address of var[%d]  = %p\n",i,ptr);
        printf("value of var[%d] = %d\n",i,*ptr);
        ptr++;
    }

   
    return 0;
}