#include<string.h>
#include<bits/stdc++.h>
using namespace std;

long  fact(long);

int main()
{

long n,f;

cout<<"Enter the number : ";
cin>>n;

f = fact(n);
cout<<"factorial = "<<f<<endl;

}

long fact(long a)
{
 long f = 1;
 int i ;
 
 for(i=1;i<=a;i++)
 {
  f = f * i;
 }
 return f;
}
