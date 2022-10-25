#include<string.h>
#include<bits/stdc++.h>
using namespace std;

union Abc
{
 char c;
 int i;
 float f;
};

int main()
{
 union Abc x;
 
 x.c ='B';
 cout<<"x.c = "<<x.c<<endl;
 
 x.c = 100;
 cout<<"x.i = "<<x.i<<endl;

 x.f = 123.45;
 cout<<"x.f = "<<x.f<<endl;
 
}
