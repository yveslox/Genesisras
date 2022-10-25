#include<bits/stdc++.h>
using namespace std;

int main()
{
int a,b,s,hcf,i,lcm;

cout<<"Enter two number :::";
cin>>a>>b;

if(a<b)
 s = a;
else
 s = b;

for(i=1;i<=s;i++)
{
 if((a%i==0)&&(b%i==0))
 {
  hcf = i;
 }
}

cout<<" the hcf of given number is = "<<hcf<<endl;

lcm =(a * b)/hcf;

cout<<" the lcm of given number is = "<<lcm<<endl;

}
