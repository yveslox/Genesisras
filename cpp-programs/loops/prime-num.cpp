#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,i,flag=0;

cout<<"Enter the number :::";
cin>>n;

for(i=2;i<n/2;i++)
{
 if(n%i==0)
 {
  flag = 1;
  break;
 }
}

if(flag == 1)
cout<<n<<" is not prime number."<<endl;
else
cout<<n<<" is prime number."<<endl;
}
