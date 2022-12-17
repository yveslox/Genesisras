#include<stdio.h>

int main()
{
    int var = 24;
    int *p;

    p = &var;

    printf("Address of varvariable is : %p\n",&var);
    
    printf("Address of stored in pointer variable p is : %p\n",p);
    
    printf("Value of var variable or the value stored at adress p is %d\n",*p);
    
}