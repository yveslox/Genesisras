#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,i;

cout<<"Enter the number:::";
cin>>n;

for(i=2;i<n/2;i++)
{
 if(n%i == 0)
 {
  cout<<n<<" is not a prime number."<<endl;
  exit(0);
 }
}

cout<<n<<" is a prime number."<<endl;

}
