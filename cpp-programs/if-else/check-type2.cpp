#include<bits/stdc++.h>
using namespace std;

int main()
{
 char ch;
 
 cout<<"Enter a character :::";
 cin>>ch;
 
 if((ch>='A')&&(ch<='Z'))
  cout<<"Character is in upper case."<<endl; 
 else if((ch>='a')&&(ch<='z'))
  cout<<"Character is in lower case."<<endl; 
 else if((ch>='0')&&(ch<='9'))
  cout<<"Character is a Digit"<<endl; 
 else
  cout<<"Character is special symbol"<<endl; 
}
