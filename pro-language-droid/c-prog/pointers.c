#include<stdio.h>

int main()
{
    int num = 12;
    int*p = &num;
    printf("value: %d",*p);
    printf("\n");
    printf("Memory Address : %p\n",p);

}