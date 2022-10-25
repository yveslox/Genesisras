#include<bits/stdc++.h>
using namespace std;

int main()
{
 long int n,r,x,rev;
 
 cout<<"Enter any number :::";
 cin>>n;
 
 x = n;
 rev = 0;
 
 while(n!=0)
 {
  r = n % 10;
  rev = (rev * 10 ) + r;
  n = n / 10;
 }
 
 cout<<"Reversed number is = "<<rev<<endl;
 if(rev == x)
 cout<<"It is palindrome number."<<endl;
 else
 cout<<"It is not palindrome number."<<endl;
}
