#include<iostream>
#include<math.h>

using namespace std;

int sum(int,int);
int sub(int,int);
int mul(int,int);
int divi(int,int);

int rem;

int main()
{
    int a,b,m,su,s,d;
    
    cout<<"Enter two numbers : "<<endl;
    cin>>a>>b;
    s = sum(a,b);
    su = sub(a,b);
    m = mul(a,b);
    d = divi(a,b);

    cout<<"Sum : = "<<s<<" Substraction : = "<<su<<endl;
    cout<<"Multiplocation : = "<<m<<" Division : = "<<d<<endl;

    return 0;
}

int sum(int a,int b)
{
    rem = a + b;
    return (rem);
}

int sub(int a,int b)
{
    rem = a - b;
    return(rem);
}

int mul(int a,int b)
{
    rem = a * b;
    return(rem);
}

int divi(int a,int b)
{
    rem = a/b;
    return(rem);
}