#include<bits/stdc++.h>
using namespace std;

int main()
{
 long int n,c;
 
 cout<<"Enter a position number:::";
 cin>>n;
 
 c = 0;
 while(n!=0)
 {
  n = n / 10;
  c = c + 1;
 }
 
 cout<<"The number of digits is = "<<c<<endl; 
}
