#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int fibo(int);

int main()
{

long n,t;

cout<<"Enter the term number : ";
cin>>n;

t = fibo(n);

cout<<n<<"th term of fibonacci series is = "<<t<<endl;

}

int fibo(int n)
{
 if(n==0 || n==1)
  return n;
 else
  return fibo(n-1) + fibo(n-2);
}
