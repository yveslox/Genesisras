#include<bits/stdc++.h>
using namespace std;

int main()
{
 int a,b;
 
 cout<<"Enter the value of a and b :::"<<endl;
 cin>>a>>b;
 
 cout<<"Before swap "<<"a : "<<a<<", b : "<<b<<endl;
 
 a = a + b;
 b = a - b;
 a = a - b;
 
 cout<<"a : "<<a<<", b : "<<b<<endl;
}
