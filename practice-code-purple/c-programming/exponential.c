#include<stdio.h>

int main()
{
    int n,exp,exp1;
    long long int value= 1;

    printf("Enter the number and its exponenetial : \n");
    scanf("%d%d",&n,&exp);

    exp1 = exp;

    while(exp --> 0)
    {
        value *=n;
    }
    printf("%d ^ %d = %lld\n",n,exp1,value);

    return 0;
}