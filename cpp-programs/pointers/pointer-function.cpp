#include<string.h>
#include<bits/stdc++.h>
using namespace std;

void add(int,int);
void sub(int,int);

int main()
{
 int a = 10,b = 20;
 void (*pf)(int,int);
 
 pf = add;
 
 (*pf)(a,b);
 
 pf = sub;
 
 (*pf)(a,b);
 
}

void add(int x,int y)
{
 int s;
 s = x + y;
 cout<<"Sum = "<<s<<endl;
}

void sub(int x,int y)
{
 int d;
 d = x - y;
 cout<<"Difference = "<<d<<endl;
}
