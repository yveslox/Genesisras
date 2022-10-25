#include<bits/stdc++.h>
using namespace std;

int main()
{

int a,b,c,g;

cout<<"Enter three numbers : ";
cin>>a>>b>>c;

g =((a>b)?((a>c)?a:c):((b>c)?b:c));

cout<<"The greatest number is = "<<g<<endl;
}
