#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int pow(int ,int);

int main()
{

long x,n,p;

cout<<"Enter the base : ";
cin>>x;

cout<<"Enter the exponent power : ";
cin>>n;

p = pow(x,n);
cout<<n<<"the power of "<<x<<" is = "<<p<<endl;

}

int pow(int x,int n)
{
 if(n==0)
  return 1;
 else
  return (x * pow(x,n-1));
}
