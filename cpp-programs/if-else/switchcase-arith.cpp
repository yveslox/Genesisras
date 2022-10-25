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

switch(op)
{
 case '+':
 res =a + b;
 break;
 
 case '-':
 res =a - b;
 break;
 
 case '*':
 res =a * b;
 break;

 case '/':
 res =a / b;
 break;

 case '%':
 res =a % b;
 break;
 
 default:
  cout<<"Wrong operator "<<endl;
 break;
}
cout<<a<<" "<<op<<" "<<b<<" = "<<res<<endl;

}
