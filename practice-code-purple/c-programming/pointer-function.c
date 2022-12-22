#include<stdio.h>

int func(int a, int b)
{
    printf("a = %d\n",a);
    printf("b = %d\n",b);
}

int main()
{
    
    int (*fptr)(int,int);

    fptr = func;

    func(2,3);

    fptr(2,3);
     
    return 0;
}