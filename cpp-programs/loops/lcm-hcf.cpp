#include<bits/stdc++.h>
using namespace std;

int main()
{
int a,b,g,hcf,i,lcm;

cout<<"Enter two number :::";
cin>>a>>b;

if(a > b)
 g = a;
else
 g = b;

for(i=1;i<=(a*b);i++)
{
 if((i%a==0)&&(i%b==0))
 {
  lcm = i;
  break;
 }
}

cout<<" the lcm of given number is = "<<lcm<<endl;

hcf =(a * b)/lcm;

cout<<" the hcf of given number is = "<<hcf<<endl;

}
