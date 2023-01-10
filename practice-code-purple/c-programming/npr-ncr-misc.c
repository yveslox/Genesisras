#include<stdio.h>

long factorial(int);
long find_npr(int,int);
long find_ncr(int,int);

int main()
{
    int n,r;
    long npr,ncr;

    printf("Enter the value of n and r respective: \n");
    scanf("%d%d",&n,&r);

    npr = find_npr(n,r);
    
    ncr = find_ncr(n,r);

    printf("%dC%d = %ld\n\n",n,r,ncr);
    
    printf("%dP%d = %ld\n\n",n,r,npr); 
}

long find_ncr(int a,int b)
{
    return(factorial(a)/(factorial(b)*factorial(a-b)));
}

long find_npr(int a,int b)
{
    return(factorial(a)/factorial(a-b));
}

long factorial(int c)
{
    if(c== 1 || c ==0)
    return 1;
    else 
    return c*factorial(c-1);
}