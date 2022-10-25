#include<string.h>
#include<bits/stdc++.h>
using namespace std;

void cube(int &);

int main()
{
 int a = 10;
 
 cube(a);
 
 cout<<"a = "<<a<<endl;
}

void cube(int &x)
{
 x = x * x * x;
 cout<<"x = "<<x<<endl;
}

