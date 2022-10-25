#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,i,x,r,sum;

cout<<"Enter the number :::";
cin>>n;


x = n;
sum = 0;
while(n!=0)
{
 r = n % 10;
 sum = sum +(r * r *r);
 n = n /10;
}

if(sum == x)
cout<<x<<" is amstrong number."<<endl;
else
cout<<x<<" is not amstrong number."<<endl;
}
