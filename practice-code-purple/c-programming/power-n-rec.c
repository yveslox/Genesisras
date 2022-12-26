#include<stdio.h>

int power(int n1,int n2);

int main()
{
    int base,exp;

    printf("Enter base number : ");
    scanf("%d",&base);
    
    printf("Enter power factor : ");
    scanf("%d",&exp);

    printf("%d^%d = %d\n",base,exp,power(base,exp));
    
    return 0;
}

int power(int b, int e)
{
    
    if(e == 0)
    {
       return 1;
    }
    return (b*power(b,e-1));    
}
