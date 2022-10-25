#include<string.h>
#include<bits/stdc++.h>
using namespace std;

long  fact(int);

int main()
{

long n,f;

cout<<"Enter the number : ";
cin>>n;

f = fact(n);
cout<<"factorial = "<<f<<endl;

}

long fact(int a)
{
 if(a==1)
  return 1;
 else
  return (a * fact(a-1));
}
