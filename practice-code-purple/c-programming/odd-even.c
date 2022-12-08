#include<stdio.h>

int main()
{
    int x;
    for(x =0;x<=10;x++)
    {
        if(x&1)
        printf("%d is odd\n",x);
        else if(!(x&1))
        printf("%d is even\n",x);
    }

    return 0;
}