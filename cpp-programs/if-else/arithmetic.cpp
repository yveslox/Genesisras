#include<bits/stdc++.h>
using namespace std;

int main()
{
char op;

int a,b,res;

cout<<"Enter two numbers :::";
cin>>a>>b;

cout<<"Enter the operator (+,-,*,/,%)::: ";
cin>>op;

if(op=='+')
{
 res = a + b;
}
else if(op=='-')
{
 res = a - b;
}
else if(op=='*')
{
 res = a * b;
}
else if(op=='/')
{
 res = a / b;
}
else if(op=='%')
{
 res = a % b;
}
else
{
 cout<<"Wrong operator"<<endl;
}

cout<<a<<" "<<op<<" "<<b<<" = "<<res<<endl;

}
