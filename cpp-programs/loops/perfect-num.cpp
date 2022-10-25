#include<bits/stdc++.h>
using namespace std;

int main()
{
int i,n,sum;

cout<<"Enter a number : ";
cin>>n;

sum = 0;

for(i=1;i<=n/2;i++)
{
 if(n%i == 0)
 {
  sum = sum + i;
 }
}

if(sum == n)
{
 cout<<"It is a perfect number."<<endl;
}
else
{
 cout<<"It is not a perfect number."<<endl;
}
}
