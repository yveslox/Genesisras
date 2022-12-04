#include<stdio.h>

int main()
{
    int i = 10;

    do
    {
        printf("i = %d\n",i);
        i = i-1;
    }
    while(i>0);

    printf("The value of i after exiting the loop is %d\n",i);

    return 0;
}