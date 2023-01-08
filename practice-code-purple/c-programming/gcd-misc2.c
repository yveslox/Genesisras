#include<stdio.h>

int gcd(int c,int d)
{
    if(d == 0)
    return c;
    else 
    return gcd(d,c%d);
}

int main()
{
    int a,b;
    
    printf("Enter 2 numbers : \n");
    scanf("%d%d",&a,&b);
        
    printf("Greatest common divisor is : %d\n",gcd(a,b));
}

