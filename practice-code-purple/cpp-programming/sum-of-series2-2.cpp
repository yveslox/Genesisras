#include<math.h>
#include<iostream>
using namespace std;

 

int main()
{
    long i,n,x,sum =1;

    cout<<"1 + x + x ^ 2+...+x^n\n";
    cout<<"Enter the value of x and n: ";
    cin>>x>>n;

    for(i = 1; i<=n;i++)
    sum+=pow(x,i);
    cout<<"Sum = "<<sum<<endl;
    return 0;
}

