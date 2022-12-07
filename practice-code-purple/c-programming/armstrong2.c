#include<stdio.h>
#include<math.h>

int main()
{
    int n,sum = 0,c,t,a;

    printf("Enter the number : ");
    scanf("%d",&n);
    t = n;
        while(n != 0)
        {
            a = n %10;
            sum += a *a* a;
            n = n/10;
        }
    printf("Sum  = %d\n",sum);
    
    if(sum == t)
    printf("%d is an armstrong number\n",t);
    else 
    printf("%d is not an armstrong number\n",t);
    return 0;
}