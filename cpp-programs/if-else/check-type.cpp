#include<bits/stdc++.h>
using namespace std;

int main()
{
 char c;
 
 cout<<"Enter a character :::";
 cin>>c;
 
 if(c>=65 && c<=90)
 {
  cout<<"Character "<<c<<" is in upper case."<<endl; 
 }
 else if(c>=97 && c<=122)
 {
  cout<<"Character "<<c<<" is in lower case."<<endl; 
 }
 
 else if(c>=48 && c<=57)
 {
  cout<<"Character "<<c<<" is a Digit"<<endl; 
 }
 else
 {
  cout<<"Character "<<c<<" is special symbol"<<endl; 
 }
}
