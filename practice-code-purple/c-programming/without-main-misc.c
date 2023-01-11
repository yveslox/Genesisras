#include<stdio.h>
#include<stdlib.h>

int fun()
{
    printf("welcome");
    return(0);
}

void _start()
{
    int x = fun();
    exit(x);
}