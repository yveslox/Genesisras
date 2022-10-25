#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,i,x,r,sum,f;

cout<<"Enter the number ::: ";
cin>>n;


x = n;
sum = 0;
while(n!=0)
{
 r = n % 10;
 f = 1;
 for(i=1; i<=r;i++)
 {
  f = f * i;
 }
 sum = sum + f;
 n = n / 10; 
}

if(sum == x)
cout<<x<<" is strong number."<<endl;
else
cout<<x<<" is not strong number."<<endl;
}
