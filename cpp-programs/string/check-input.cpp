#include<string.h>
#include<bits/stdc++.h>
using namespace std;

const int Max = 80;

int main()
{
char c;

cout<<"Enter a character :::";
cin>>c;

if(isupper(c))
  cout<<"Character "<<c<<" is in upper case."<<endl;
else if(islower(c))
  cout<<"Character "<<c<<" is in lower case."<<endl;
else if(isdigit(c))
  cout<<"Character "<<c<<" is a digit case."<<endl;
else
  cout<<"Character "<<c<<" is special symbol."<<endl;

}
