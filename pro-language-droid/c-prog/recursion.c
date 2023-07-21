#include<stdio.h>

void recursionfunction(int n)
{
    if(n == 0)
    {
        return ;
    }
    printf("%d\n",n);
    recursionfunction(n - 1);
}

int main()
{
    recursionfunction(5);
}