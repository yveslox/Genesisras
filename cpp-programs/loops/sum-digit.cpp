#include<bits/stdc++.h>
using namespace std;

int main()
{
 long int n,r,sum;
 
 cout<<"Enter any number : ";
 cin>>n;
 
 sum = 0;
 
 while(n!=0)
 {
  r = n % 10;
  sum = sum + r;
  n = n / 10;
 }
 
 cout<<"The sum of digits is = "<<sum<<endl;
}
