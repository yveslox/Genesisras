#include<stdio.h>

int main()
{
    int n, i;
    float sum = 0,x;

    printf("Enter number of elements : ");
    scanf("%d",&n);

    printf("Enter %d elements\n",n);

    for(i = 0;i<n;i++)
    {
        scanf("%f",&x);
        sum +=x;
    }
    printf("Average of the entered number is = %f\n",(sum/n));
}