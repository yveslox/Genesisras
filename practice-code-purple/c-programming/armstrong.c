#include<stdio.h>
#include<math.h>

int main()
{
    int n,sum,i,t,a;

    printf("the armstrong number in between 1 to 500 are : ");

    for(i=1;i<=500;i++)
    {
        t = i;
        sum = 0;
        while(t != 0)
        {
            a = t %10;
            sum += a *a* a;
            t = t/10;
        }
        if(sum == i)
        printf("\n\t\t%d",i);
    }
    printf("\n");
    return 0;
}