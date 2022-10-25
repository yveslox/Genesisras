#include<bits/stdc++.h>
using namespace std;

int main()
{
 
 int a = 100,b;
 
 b = sizeof(a);
 cout<<"The size of a: "<<b<<endl;
  
 b = sizeof(double);
 cout<<"The size of double : "<<b<<endl;
 
 b =sizeof(123L);
 cout<<"The size of 123L : "<<b<<endl;
 
 b =sizeof(123.45);
 cout<<"The size of 123.45 : "<<b<<endl;

 b =sizeof(123.45f);
 cout<<"The size of 123.45f : "<<b<<endl;

 
}
